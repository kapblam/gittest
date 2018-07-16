#include <iostream>
using namespace std;

int main()
{
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

    //string assignment
    string s1 = "Hello" ;
    string s2 = "World";

    //return length of string
    cout << s1.size() << endl; //5
    cout << s2.size() << endl; //5

    //concatenate string using + operator
    s1 = s1 + s2;
    cout << s1 << endl; //HelloWorld

    //append string
    s1.append("Geeks");
    cout << s1 << endl; //HelloWorldGeeks

    string s3 = "HelloWorldGeeks";

    //compare two strings
    if (s1.compare(s3) == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    //substring of s1
    //substr(pos, length_of_substring)
    string sub = s1.substr(0,5);
    cout << sub << endl; //Hello

    //insert into string
    //insert(pos,string)
    s1.insert(10,"For");
    cout << s1 << endl; //HelloWorldForGeeks

    string target = "World";

    //find a target in s1
    size_t pos = s1.find(target);
    cout << "npos " << std::string::npos << endl;
    if (pos != std::string::npos)
        cout << "Found at Position: " << pos << endl;

    //replace a portion of string s1
    //replace(pos, length_of_portion, string_to_replace)
    cout << s1.replace(5,5,"Geeks");

    return 0;
}
