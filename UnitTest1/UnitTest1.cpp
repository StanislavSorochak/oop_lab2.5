#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_lab2.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair pair(12.0, 0.5);
			Assert::AreEqual(pair.Dobutok(), 6.0);
		}
	};
}
