#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const int K = 1;
			const int N = 1;
			t = S0(K, N);
			Assert::AreEqual(t, 0.5);
		}
	};
}
