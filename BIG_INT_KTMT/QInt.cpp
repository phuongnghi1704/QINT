#include "QInt.h"
//ý tưởng: nhập vào các số nguyên ở dạng chuỗi sau đó lưu lại trong Qint dạng nhị phân
//khi xuất ra màn hình thì đổi từ nhị phân sang chuỗi

//string2qint
//qint2string
//qint2bin
//bin2qint
//qint2hex
//hex2qint

QInt::QInt(){
	//set 0
	data[0] = 0;
	data[0] = 0;
}
QInt::QInt(char* string) {
	
}

QInt::~QInt()
{
}

//function to set bit in specific place
void QInt::SetBit(QInt &a, bool bit, int i) {
	// Tùy theo vị trí i ta quyết định thao tác xử lý bit trên phần tử nào của
	// biến BigInt.
	int index = 1;
	if (i >= MAX_BIT / 2) {
		index = 0;
		i -= MAX_BIT / 2;
	}
	if (bit)
		turnOnBit(a.data[index], i);
	else
		turnOffBit(a.data[index], i);
	// VD: i = 31 thao tác bit thứ 31 của a.data[0],
	// i = 32 thao tác bit thứ 1 của a.data[1]

}
//function to convert string to qint
bool QInt::StrToQInt(string number, QInt& qint) {
	int len = number.length();
	//kiểm tra dấu - check data
	//if (!checkData(number)) return false;
	//if (number[0] == NEGATIVE) {}
	int i = MAX_BIT - 1;
	while (number != "") {
		bool  bit = (number[len - 1] - 48) % 2;//tính phần dư
		SetBit(qint, bit, i);
		number = StrDiv2(number);
		i--;
	}
	return true;
}

bool QInt::QintToBin(const QInt& qint, string& S) {
	string binString = "";
	bool bit = 0;
	int cur = 0, len = 0, index = 0;
	while (len < MAX_BIT)
	{
		if (index >= MAX_BIT / 2) {
			index -= MAX_BIT / 2;
			cur++;
		}
		getBit(qint.data[cur], index, bit);
		if( bit ) binString += '1';
		else binString += '0';
		len++;
		index++;
	}
	cout << endl << binString<<endl;
	S = binString;
	return true;
}
