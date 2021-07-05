// FirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Check divisible numbers (by x & y) in between p and q;
    int p = 1000, q = 5000, x = 3, y = 5;
	if(x > y)
	{
		y = x + y;
		x = y - x;
		y = y - x;
	}
	int gcd = y;
	while (gcd % x != 0) gcd = gcd + y;
	int preDiv = p / gcd;
    if (p % gcd != 0)
    {
		preDiv++;
    }
	int div = preDiv * gcd;
    while(div <= q)
    {
		cout << div << " ";
		div += gcd;
    }
	cout << "\b" << endl;
	
    system("pause>0");
}
