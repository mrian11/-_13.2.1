#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_13.2/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitLAB1321
{
	TEST_CLASS(UnitLAB1321)
	{
	public:
		
		TEST_METHOD(TestMaxMacro)
		{
	
			int a = 5, b = 8;
			int result = MAX(a, b);

			Assert::AreEqual(b, result);
		}

		TEST_METHOD(TestMinMacro)
		{
			int a = 5, b = 8;
			int result = MIN(a, b);

			Assert::AreEqual(a, result);
		}

	};
}
