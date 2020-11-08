#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.2/lab5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			double x = 0;
			double n = 1;
			double a = 1;
			t = A(x, n, a);
			Assert::AreEqual(t, 0.);
		}
	};
}
