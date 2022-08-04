#include<iostream>
#include <math.h>
#include <iomanip>
#include <locale>

#include "func.h"
#include "ryad.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");	  							 //���������� �������� �����

	double x = 1.0, x_end = 2.0, h = 0.1; 							//���������� ����������
	double s, a, xx, n;
	int i = 1;

	cout << " �������: Y = 1/2 * Ln(x) " << endl;

	cout << " ��������� �������� � = " << x << endl;
	cout << " �������� �������� � = " << x_end << endl;
	cout << " ��� = " << h << endl << endl;

	cout << " _______________________________" << endl;						//����� �������
	cout << "| i |  x  |    y    |    s    |" << endl;
	cout << "--------------------------------" << endl;

	for (; x < x_end; x += h) {							//���� ���������� �������� ��������

		a = (x - 1) / (x + 1);								//��������� ��������� ��������
		xx = a * a;
		s = a ;

		cout << fixed << setprecision(1) << "| " << i << "|  " << x;	//����� ��������
		cout << fixed << setprecision(6)  << " | " << func(x) << "| " << ryad(a,xx,s) << "|" << endl;

		cout << "--------------------------------" << endl;
		i++;
	}

	system("Pause");
	return 0;
}