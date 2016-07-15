#pragma once
#include<string>
using namespace std;

class ReverseVowels {
public:
	
string Reverse(string &s) {
		char temp;
		for (int i = 0, j = s.size() - 1; i <j; i++, j--) {
			while ((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
				&& (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'))
				i++;
			while ((s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u')
				&& (s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U'))
				j--;
			if (i >= j) break;
			temp = s[i], s[i] = s[j], s[j] = temp;
		}
		return s;
	}
};