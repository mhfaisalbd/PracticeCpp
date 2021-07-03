// FirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int month, year;
    cout << "Input MM yyyy\t";
    cin >> month >> year;

    cout << "days in month:\t";
    switch (month)
    {
    case 2: ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        ? cout << 29 : cout << 28; break;
        case 4:
        case 6:
        case 9:
        case 11: cout << 30; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout << 31; break;

        default:
            cout << "Invalid Month!"; break;
    }
    cout << endl;
    system("pause>0");
}
