#include <iostream>
#include <string>
#include <fstream>

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