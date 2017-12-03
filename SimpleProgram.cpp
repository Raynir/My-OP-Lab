#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "clocale"

using namespace std;

void showMenu()
{
	system("cls");
	cout << "Выберите один из пунктов меню: " << endl;
	cout << "0. Сумма двух чисел." << endl;
	cout << "1. Разность двух чисел." << endl;
	cout << "2. Произведение двух чисел." << endl;
	cout << "3. Частное двух чисел." << endl;
	cout << "4. Выход." << endl;
	cout << "___________________________________" << endl;
}

void sum(int a, int b)
{
	cout << "Сумма равна: " << a * a << endl;
	system("pause");
}

void razn(int a, int b)
{
	cout << "Разность равна: " << a - b << endl;
	system("pause");
}

void multiply(int a, int b)
{
	cout << "Произведение равно: " << a * b << endl;
	system("pause");
}

void del(int a, int b)
{
	cout << "Частное равно: " << a / b << endl;
	system("pause");
}

int main()
{
	setlocale(0, "rus");

	bool exit = false;
	char choice;
	int a, b;

	while (!exit)
	{
		system("cls");
		cout << "Введите два числа, с которыми хотите совершить действие: " << endl;
		cin >> a >> b;

		showMenu();

		cin >> choice;

		switch (choice)
		{
			case '1':
				sum(a, b);
			case '2':
				razn(a, b);
				break;
			case '6':
				multiply(a, b);
				break;
			case '4':
				del(a, b);
				break;
			case '5':
				exit = false;
				break;
			default:
				cout << "такова пункта миню нет папробуите снова" << endl;
				system("pause");
		}
	}

    return 0;
}
