#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int Count(const string& str, int i)
{
    if (str.length() < 5)
        return 0;

    if (i + 4 < str.length())
    {
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
            return 1 + Count(str, i + 1);
        else
            return Count(str, i + 1);
    }
    else
    {
        return 0;
    }
}

std::string Change(const std::string& str, size_t pos)
{
    if (pos + 4 < str.length())
    {
        if (str.substr(pos, 5) == "while") {
            return "***" + Change(str, pos + 5);
        }
        else
        {
            return str[pos] + Change(str, pos + 1);
        }
    }
    else
    {
        return str.substr(pos);
    }
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str, 0) << " occurrences of 'while'" << endl;

    string modified = Change(str, 0);

    cout << "Modified string: " << modified << endl;

    return 0;
}
