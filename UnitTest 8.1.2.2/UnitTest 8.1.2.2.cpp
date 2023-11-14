#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab 8.1.2.2/Lab 8.1.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace YourProjectTests
{
    TEST_CLASS(StringManipulationTest)
    {
    public:
        TEST_METHOD(TestCount)
        {
            string str1 = "while abc while def while";
            Assert::AreEqual(Count(str1, 0), 3);

            string str2 = "abc while def while ghi";
            Assert::AreEqual(Count(str2, 0), 2);

            string str3 = "no occurrences";
            Assert::AreEqual(Count(str3, 0), 0);
        }

        TEST_METHOD(TestChange)
        {
            string str1 = "while dsf while jte while";
            string modified1 = Change(str1, 0);
            Assert::AreEqual(modified1.c_str(), "*** dsf *** jte ***");

            string str2 = "feg while bnm while utu";
            string modified2 = Change(str2, 0);
            Assert::AreEqual(modified2.c_str(), "feg *** bnm *** utu");

            string str3 = "no one whil e";
            string modified3 = Change(str3, 0);
            Assert::AreEqual(modified3.c_str(), str3.c_str());
        }
    };
}
