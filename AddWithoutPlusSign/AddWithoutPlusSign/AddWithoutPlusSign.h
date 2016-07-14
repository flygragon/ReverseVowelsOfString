#pragma once
class Add {
private:
	int bitMan(int &a, int &b) {
		if (!a) return b;
		if (!b) return a;
		int m = a^b, n = (a&b) << 1;
		return bitMan(m, n);
	}
public:
	int getSum(int &a, int &b) {
		return bitMan(a, b);
	}
};