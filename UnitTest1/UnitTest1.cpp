#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.6/LongC.h"
#include "../lab1.6/LongC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongC pair;
			pair.setFirst(3);
			pair.setSecond(5);
			
			Assert::AreEqual(pair.getFirst(), 3);
			Assert::AreEqual(pair.getSecond(), 5);
		}
	};
}
