#include "pch.h"
#include "CppUnitTest.h"
#include "../../LABA_8.1_2/ConsoleApplication1/ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101];
			cin.getline(str, 100);
			char* dest = new char[151];
			dest = Change(str, 0);
			
	
		}
	};
}
