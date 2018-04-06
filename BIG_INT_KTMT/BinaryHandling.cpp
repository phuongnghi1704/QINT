#include "QInt.h"

//function to check if a char is number
bool isNumber(char key) {
	return key >= '0' && key <= '9';
}
//function to count digits
int countDigits(long a) {
	long count = 0;
	while (a != 0) {
		a /= 10;
		count++;
	}
	return count;
}
//function to check valid string of number
bool checkData(const string &number) {
	int lent = number.length();
	for(int i=0;i<=lent;i++){}
}
//function to divide string number by 2
string StrDiv2(string X) {
	if (X == "") return X;
	int len = X.length();
	string res = "";
	int i = 0;
	char buff = 0;// atoi -48
	if (X[0] == '1') {
		buff = 1;
		i = 1;
	}
	for (; i < len; i++) {
		if (buff == 0)
			res += ((X[i] - 48) / 2) + 48;
		else

			res += ((buff * 10 + (X[i] - 48)) / 2) + 48;
		buff = (X[i] - 48) % 2;
	}
	return res;
}

bool getBit(const long long &data, int i, bool& bit) {
	//check error
	if (i >= MAX_BIT / 2) return false;
	bit = (data >> i) & 1;
	return true;
}

bool turnOffBit(long long &data, int i) {
	if (i >= MAX_BIT / 2) return false;
	data &= ~(1 << i);
	return true;
}

bool turnOnBit(long long &data, int i) {
	if (i >= MAX_BIT / 2) return false;
	data ^= (1 << i);
	return true;
}