#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "clocale"

using namespace std;

void showMenu()
{
	system("cls");
	cout << "Выберите один из пунктов меню: " << endl;
	cout << "1. Сумма двух чисел." << endl;
	cout << "2. Разность двух чисел." << endl;
	cout << "3. Произведение двух чисел." << endl;
	cout << "4. Частное двух чисел." << endl;
	cout << "5. Выход." << endl;
	cout << "___________________________________" << endl;
}

void sum(int a, int b)
{
	cout << "Сумма равна: " << a + b << endl;
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
			break;
		case '2':
			razn(a, b);
			break;
		case '3':
			multiply(a, b);
			break;
		case '4':
			del(a, b);
			break;
		case '5':
			exit = true;
			break;
		default:
			cout << "Такого пункта меню нет. Попробуйте снова" << endl;
			system("pause");
		}
	}

	return 0;
}
