// AddWithoutPlusSign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"AddWithoutPlusSign.h"
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	Add addSum;
	cout << addSum.getSum(a, b) <<'\n';
	exit(0);
    return 0;
}

