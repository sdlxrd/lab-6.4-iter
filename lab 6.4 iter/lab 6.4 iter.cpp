#include <iostream>
#include <iomanip>

using namespace std;

void Input(int* &a, const int size)
{
	a = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
void Print(int* a, const int size)
{
	cout << "a = {";
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << "}" << endl;
}
int CountZero(int* a, const int size)
{
	int countzero = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 0)
			countzero++;
	}
	return countzero;
}

int Min(int* a, const int size, int& imin)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min) 
		{
			min = a[i];
			imin = i;
		}
	return min;
}
int Sum(int* a, const int size) 
{
	int S = 0;
	int imin = 0;
	Min(a, size, imin);
	for (int i = 0; i < size; i++)
		if (i > imin)
			S += a[i];
	return S;
}
void Sort(int* a, const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = a[i]; 
		int imin = i;
		for (int j = i + 1; j < size; j++)
			if (min > a[j])
			{
				min = a[j];
				imin = j;
			}
		a[imin] = a[i];
		a[i] = min;
	}
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];

	Input(a, n);
	Print(a, n);

	cout << endl;
	cout << "Count Zero = " << CountZero(a, n) << endl;
	cout << "Sum        = " << Sum(a, n) << endl << endl;



	Sort(a, n);
	Print(a, n);

	delete[] a;
	return 0;
}