// FirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Input length of three arms of a triangle:\t";
    cin >> x >> y >> z;
    cout << ((x == y && y == z) ? "Equilateral" :
    (x != y && x != z && y != z) ?
    "scalene" : "isoscales") << endl;
    system("pause>0");
}
