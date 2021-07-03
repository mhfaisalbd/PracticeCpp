// FirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Input length of three arms of a triangle:\t";
    cin >> x >> y >> z;
    if (x == y && y == z)
    {
        cout << "Equilateral";
    }
    else if (x != y && x != z && y != z)
    {
        cout << "scalene";
    }
    else
    {
        cout << "isoscales";
    }
    cout << endl;
    system("pause>0");
}
