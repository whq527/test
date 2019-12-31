#include "pch.h"
#include "CppUnitTest.h"
#include "..\test\head.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(5, sum(1, 4));
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(7, sum(3, 4));
		}
	};
}
