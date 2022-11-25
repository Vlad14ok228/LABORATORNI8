#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str;
			cout << "Enter str: ";
			getline(cin, str);
			cout << endl;
			cout << "Modify str: ";
			DelandModify(str);
			
		}
	};
}
