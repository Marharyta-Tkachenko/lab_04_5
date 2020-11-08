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
			double t;
			const double x = 3;
			const double y = 1;
			t = g(x, y);
			Assert::AreEqual(t, 2, 88912.);
		}
	};
}
