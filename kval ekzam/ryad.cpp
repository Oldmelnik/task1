#include <math.h>
double ryad(double a, double xx, double s) {
	double n;
	for (n = 3.0; n <= 21.0; n += 2.0) {				//���� ������� ����� ����
		a *= xx;
		s += a * (1 / n);

		//cout << "N = " << n << endl;
	}
	return s;
}

double func(double x) {
	double y = 0;
	y = 0.5 * log(x);												//������� �������
	return y;
}
