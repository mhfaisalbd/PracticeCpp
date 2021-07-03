// FirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /*cout << "size of bool\t" << sizeof(bool) << endl;
    cout << "size of char\t" << sizeof(char) << endl;
    cout << "size of int\t" << sizeof(int) << endl;
    cout << "size of unsigned int\t" << sizeof(unsigned int) << endl;
    cout << "size of long int\t" << sizeof(long long int) << endl;
    cout << "size of float\t" << sizeof(float) << endl;
    cout << "size of double\t" << sizeof(float) << endl;*/
    
    /*cout << "Max of char\t" << CHAR_MAX << endl;
    cout << "Max of int\t" << INT32_MAX << endl;
    cout << "Max of unsigned int\t" << UINT32_MAX << endl;
    cout << "Max of long\t" << LLONG_MAX << endl;
    cout << "Max of float\t" << FLT_MAX << endl;
    cout << "Max of double\t" << DBL_MAX << endl;*/

    char ch = CHAR_MAX + 1;
    int i = INT32_MAX + 1;
    unsigned int ui = UINT32_MAX + 1;
    long long lli = LLONG_MAX + 1;
    float f = FLT_MAX + 1;
    double d = DBL_MAX + 1;

    cout << "Overflow of char\t" << ch << endl;
    cout << "Overflow of int\t" << i << endl;
    cout << "Overflow of unsigned int\t" << ui << endl;
    cout << "Overflow of long\t" << lli << endl;
    cout << "Overflow of float\t" << f << endl;
    cout << "Overflow of double\t" << d << endl;



    system("pause>0");
}
