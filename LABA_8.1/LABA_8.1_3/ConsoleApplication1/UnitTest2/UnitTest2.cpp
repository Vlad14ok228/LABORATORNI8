#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str, dest;
			cout << "Enter string:" << endl;3
			getline(cin, str);
			cout << "String contained " << Count(str) << " groups" << endl;
			string; dest = Change(str);
			cout << "Modified string (param) : " << str << endl;
			cout << "Modified string (result): " << dest << endl;
			return;
		}
	};
}
