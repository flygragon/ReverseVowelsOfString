// ReverseVowelsOfString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"ReverseVowelsOfString.h"
using namespace std;

int main()
{
	string test;
	cin >> test;
	ReverseVowels app;
	cout <<app.Reverse(test) <<'\n';
    return 0;
}

