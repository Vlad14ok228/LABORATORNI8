#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void DelandModify(string str)
{
    for (int i = 0; str[i] != ' '; i++)
    {
        if (!isalnum(str[i])) {
            str.erase(i, 1);
            i--;
        }
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    cout << str;

}

int main()
{
    string str;
    cout << "Enter str: ";
    getline(cin, str);
    cout << endl;
    cout << "Modify str: ";
    DelandModify(str);
    return 0;
}
