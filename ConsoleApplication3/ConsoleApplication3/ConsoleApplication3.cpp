#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j=0;
	string a[4], b[4], c[8];
	for (i = 0; i <= 3; i++)
	{
		cout << "enter a "<<i<<": ";
		cin >> a[i];
	}
	for (i = 0; i <= 3; i++)
	{
		cout << "enter b " << i << ": ";
		cin >> b[i];
	}
	for (i = 0; i <= 3; i++)
	{
		c[j] = a[i];
		j++;
		c[j] = b[i];
		j++;
	}
	cout << "c: ";
	for (i = 0; i <= 7; i++)
		cout << c[i]<<" ";
}

