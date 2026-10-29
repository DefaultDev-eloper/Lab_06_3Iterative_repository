#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3Iterative.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSumInt_Mixed)
		{
			int a[6] = { -4, 3, 0, 5, -1, 2 };

			Assert::AreEqual(10, Sum(a, 6));
		}

		TEST_METHOD(TestSumInt_AllNegative)
		{
			int a[3] = { -1, -2, -3 };

			Assert::AreEqual(0, Sum(a, 3));
		}

		TEST_METHOD(TestSumInt_ZeroNotAdded)
		{
			int a[3] = { 0, 0, 7 };

			Assert::AreEqual(7, Sum(a, 3));
		}

		TEST_METHOD(TestSumTemplateInt)
		{
			int a[6] = { -4, 3, 0, 5, -1, 2 };

			Assert::AreEqual(10, Sum<int>(a, 6));
		}

		TEST_METHOD(TestSumTemplateDouble)
		{
			double b[5] = { -1.5, 2.5, 0.0, 3.0, -0.5 };

			Assert::AreEqual(5.5, Sum<double>(b, 5), 1e-9);
		}

		TEST_METHOD(TestSumTemplateDouble_AllNegative)
		{
			double b[3] = { -1.1, -2.2, -3.3 };

			Assert::AreEqual(0.0, Sum<double>(b, 3), 1e-9);
		}

		TEST_METHOD(TestSumTemplateString)
		{
			string c[4] = { "-4 ", "", "3 ", "5 " };

			Assert::AreEqual(string("-4 3 5 "), Sum<string>(c, 4));
		}
	};
}