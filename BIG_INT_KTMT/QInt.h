#pragma once
#include <iostream>
#include <string.h>
#include <cmath>
#include <stdlib.h>
#include <bitset>
using namespace std;
#define MAX_BIT 128
#define NEGATIVE '-'
class QInt{
private:
	long long data[2];
	bool sign;// 0 is positive and 1 is negative
public:
	QInt();
	QInt(char* );
	~QInt();
	//friend ostream & operator << (ostream&, QInt&);//hàm nhập một chuỗi vào biến Qint
	//friend istream& operator >> (istream&, const QInt&);//hàm xuất từ Qint ra một chuỗi
	void SetBit(QInt &a, bool bit, int i);
	bool QintToBin(const QInt& A, string& S);
	bool StrToQInt(string number, QInt& qint);
};


bool getBit(const long long  &data, int i, bool& bit);
bool turnOffBit(long long &data, int i);
bool turnOnBit(long long &data, int i);
string StrDiv2(string X);

bool checkData(const string &number);
