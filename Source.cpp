#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

struct Cars
{
	int number_of_car;
	char* mark;
	float cost;
	float price_rent;
	char* type;
	bool issued;
};

struct Customers
{
	int number_of_cutomer;
	char* name;
	char* surname;
	char* patronymic;
	char* adress;
	char* phone_number;
};

struct Issued_cars
{
	int number_of_car;
	char* date_of_isuue;
	char* return_date;
};

void Autoristion()
{
	fstream file;
	string login, password, buf, file_name;
	char file_nameChar[100];
	bool exit = true;

	do
	{
		cout << "Введите логин: ";
		cin >> login;
		cout << endl << "Введите пароль: ";
		cin >> password;
		cout << endl;

		file_name = login + ".txt";

		if (login == "admin")
		{
			file.open("admin.txt", fstream::out | fstream::in | fstream::app);

			if (file.is_open())
			{
				getline(file, buf);
				file.close();

				if (buf == password)
				{
					cout << "Авторизация успешна!" << endl;
					exit = false;
					break;
				}
			}
			else
			{
				cout << "Ошибка открытия файла!" << endl;
				exit = false;
				break;
			}
		}
		else
		{
			file.open(file_name, fstream::out | fstream::in | fstream::app);

			if (!file.is_open())
			{
				cout << "Ошибка открытия файла!" << endl;
				exit = false;
				break;
			}
			else
			{
				strcpy(file_nameChar, file_name.c_str());
				if (fopen(file_nameChar, "r") == NULL)
				{
					cout << "Пользователь с таким логином не зарегестрирован!" << endl;
					exit = false;
					break;
				}
				cin.get();

				getline(file, buf);
				file.close();

				if (buf == password)
				{
					cout << "Авторизация прошла успешно!" << endl;
					exit = false;
					break;
				}
				else
				{
					cout << "Ошибка авторизации! Неверный пароль!" << endl;
					exit = false;
					break;
				}
			}
		}
	} while (exit);
}

void Registration()
{
	fstream file;
	string login, password;


}

void Menu()
{

}

int main()
{
	setlocale(LC_ALL, "rus");
	Cars cars;
	Customers customers;
	Issued_cars issued_cars;
	int menu_choose = 10;
	cin >> menu_choose;
	Autoristion();
}