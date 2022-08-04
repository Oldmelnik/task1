#include<iostream>
#include <math.h>
#include <iomanip>
#include <locale>

#include "func.h"
#include "ryad.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");	  							 //добавление русского языка

	double x = 1.0, x_end = 2.0, h = 0.1; 							//Обьявление переменных
	double s, a, xx, n;
	int i = 1;

	cout << " Функция: Y = 1/2 * Ln(x) " << endl;

	cout << " Начальное значение Х = " << x << endl;
	cout << " Конечное значение Х = " << x_end << endl;
	cout << " Шаг = " << h << endl << endl;

	cout << " _______________________________" << endl;						//Вывод таблицы
	cout << "| i |  x  |    y    |    s    |" << endl;
	cout << "--------------------------------" << endl;

	for (; x < x_end; x += h) {							//Цикл изменениия занчений ргумента

		a = (x - 1) / (x + 1);								//Установка начальных значений
		xx = a * a;
		s = a ;

		cout << fixed << setprecision(1) << "| " << i << "|  " << x;	//Вывод значений
		cout << fixed << setprecision(6)  << " | " << func(x) << "| " << ryad(a,xx,s) << "|" << endl;

		cout << "--------------------------------" << endl;
		i++;
	}

	system("Pause");
	return 0;
}