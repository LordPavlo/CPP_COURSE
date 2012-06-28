// chapter1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	
	int val = 10;
	while (val >= 0)
	{
		cout << val << " ";
		--val;
	}
	cout << endl;
	for (int i = 10; i >= 0; --i)
	{
		cout << i << " ";;
	}

	int nm1, nm2, i;

	cout << "Enter 1-st number: ";
	cin >> nm1;


	cout << "Enter 2-st number: ";
	cin >> nm2;

	if (nm1 > nm2)
	{
		for (i = nm2; i < nm1; ++i)
		{
			cout << i << " ";
		}
	}
	else if (nm2 > nm1)
	{
		for (i = nm1; i < nm2; ++i)
		{
			cout << i << " ";
		}
	}
	else
	{
		cout << "Equals";
	}

	getch();
	return 0;
}

