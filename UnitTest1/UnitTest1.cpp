#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int imin;
			int i;
			imin = 12;
			i = 11;
			if (i > imin)
				imin = imin;
			else
				imin = i;
			Assert::AreEqual(imin, 11);
		}
	};
}
