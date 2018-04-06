//(a)Chuyển đổi số QInt từ hệ thập phân sang hệ nhị phân và ngược lại
//(b) Chuyển đổi số QInt từ hệ nhị phân sang hệ thập lục phân và ngược lại
//(c) Các operator=, operator+, operator-, operator*, operator/
//(d) Các toán tử AND “&”, OR “ | ”, XOR “^”, NOT “~”
//(e) Các toán tử : dịch trái “ << ”, dịch phải “ >> ”
//(f) Các phép xoay trái “rol”, xoay phải “ror” mỗi lần xoay chỉ xử lý cho đúng 1 bit,
//không xử lý cho trường hợp tổng quát xoay k bit
#include "QInt.h"

int main(char*argc,char**argv) {
	string X,X1;
	cout << "Insert a string of number: ";
	cin >> X;
	QInt n;
	n.QintToBin(n, X1);
	n.StrToQInt(X, n);//xem lại
	n.QintToBin(n, X);
	system("pause");
	return 0;
}