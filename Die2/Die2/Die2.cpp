#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{
	int k, i = 0, x = 1;
	system("Color 7C");
	cout << "Hello there, would you like to roll a die untill it gives the result of the number you choose?" << endl;
	cout << "Please input which number you want to get from the toss of a single die." << endl;
	cin >> k;
	while ((k > 6) || (k < 1))
	{
		cout << "Please input which number you want to get from the toss of a single die." << endl;
		cin >> k;
	}
	i = rand() % 6 + 1;
	while (i != k)
	{
		srand((unsigned int)time(NULL));
		i = rand() % 6 + 1;
		cout << "Result from the roll " << x  << " is: "<< i << endl;
		Sleep(1000);
		x = x++;
	}
	cout << "The number you wanted is found in the: " << x - 1 << ". try." << endl;
	system("PAUSE");
	return 0;
}