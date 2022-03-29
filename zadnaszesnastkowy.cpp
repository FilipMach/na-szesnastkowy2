#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{


	int liczba;
	int a;
	
	cout << "Przekonwertuj liczbe: ";
	cin >> liczba;
	
	int k = liczba;
	
	cout << "W systemie szesnastkowym: ";
	
	while (2 > 1)	
	{
	
		a = liczba % 16;
	
		if (a < 10)
		{
			cout << a;
		}
		else
		{
			if (a == 10)
			{
				cout << "A";
			}
		
			if (a == 11)
			{
				cout << "B";
			}
	
			if (a == 12)
			{
				cout << "C";
			}
	
			if (a == 13)
			{
				cout << "D";
			}
	
			if (a == 14)
			{
				cout << "E";
			}
	
			if (a == 15)
			{
				cout << "F";
			}	
		}
	
		if (liczba >= 16)
		{
			liczba = liczba/16;
		}
		else 
		{
			break;	
		}
	}

	int b;
	cout << "\n" << "W systemie jedenastkowym: ";

	while (2 > 1)	
	{
	
		b = k % 11;
	
		if (b < 10)
		{
			cout << b;
		}
		else
		{
			if (b == 10)
			{
				cout << "A";
			}
		}
	
		if (k >= 11)
		{
			k = k/11;
		}
		else 
		{
			break;	
		}
	}
	
	
	return 0;
}
