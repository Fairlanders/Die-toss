#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include "conio.h"

using namespace std;

int main()
{
	int a = 0;
	int die = 0;

	srand(time(0));
	die = rand () % 6 + 1;

	while (die != 5)
	{
		srand(time(0));
		die = rand() % 6 + 1;
		cout << "Die is being rolled:" << die << endl;
		a = a+1;
		Sleep(1000);
	}
	cout << "Five is rolled in the," << a << "throw of die";
	system("pause");
}
