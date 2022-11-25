#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
int Count(char* s, char i)
{
    int k = 0,
        pos = 0;
    char* t;
    while (t = strchr(s + pos, s[i]))
    {
        pos = t - s + 1;
        if (s[pos + 1] == s[i + 1])
            k++;

    }
    return k + 1;
}
char* Change(char* s, char i)
{
    char* t = new char[strlen(s)];
    char* p;
    int pos1 = 0,
        pos2 = 0;
    *t = 0;
    while (p = strchr(s + pos1, s[i]))
    {
        if (s[p - s + 2] == s[i + 1])
        {
            pos2 = p - s + 3;
            strncat(t, s + pos1, pos2 - pos1 - 3);
            strcat(t, "***");
            pos1 = pos2;
        }
    }
    strcat(t, s + pos1);
    strcpy(s, t);
    return t;
}
int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str, 0) << " groups " << endl;
    char* dest = new char[151];
    dest = Change(str, 0);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}
