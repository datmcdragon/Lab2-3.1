#include "pch.h"
#include "CppUnitTest.h"
#include "../Number.h"
#include "../Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a(5);
			float t = a.getNum();
			float x = 5;
			Assert::AreEqual(t, x);
		}
	};
}
