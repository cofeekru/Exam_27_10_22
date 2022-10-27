#pragma once
long long int factorial(long long int);

struct ComplexNumber
{
	double real;
	double imaginary;
};
ComplexNumber addition(ComplexNumber first_number, ComplexNumber second_number);
ComplexNumber substraction(ComplexNumber first_number, ComplexNumber second_number);
ComplexNumber multiplication(ComplexNumber first_number, ComplexNumber second_number);
ComplexNumber division(ComplexNumber first_number, ComplexNumber second_number);

double** MultiplicationOfMatrixs(double** matrix_1, double** matrix_2, int& rows_1, int& columns_1, int& rows_2, int& columns_2);

typedef int number_t;
struct list
{
	
	number_t number;
	list* next = nullptr;
	list(number_t new_number)
	{
		number = new_number;
	}
};
void AddToList(list** node, number_t new_number);