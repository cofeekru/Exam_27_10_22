#include "Header.h"

long long int factorial(long long int number)
{
	if (number == 0)
	{
		return 1;
	}
	else
	{
		return number * factorial(number - 1);
	}
}


ComplexNumber addition(ComplexNumber first_number, ComplexNumber second_number)
{
	ComplexNumber new_number{first_number.real + second_number.real, first_number.imaginary + second_number.imaginary};
	return new_number;
}
ComplexNumber substraction(ComplexNumber first_number, ComplexNumber second_number)
{
	ComplexNumber new_number{ first_number.real - second_number.real, first_number.imaginary - second_number.imaginary };
	return new_number;
}
ComplexNumber multiplication(ComplexNumber first_number, ComplexNumber second_number)
{
	ComplexNumber new_number{ first_number.real * second_number.real - first_number.imaginary * second_number.imaginary, first_number.real * second_number.imaginary + second_number.real * first_number.imaginary};
	return new_number;
}
ComplexNumber division(ComplexNumber first_number, ComplexNumber second_number)
{
	ComplexNumber new_number;
	new_number.real = (first_number.real * second_number.real + first_number.imaginary * second_number.imaginary) / (second_number.real * second_number.real + second_number.imaginary * second_number.imaginary);
	new_number.imaginary = (second_number.real * first_number.imaginary - first_number.real*second_number.imaginary) / (second_number.real * second_number.real + second_number.imaginary * second_number.imaginary);
	return new_number;
}

double** MultiplicationOfMatrixs(double** matrix_1, double** matrix_2, int& rows_1, int& columns_1, int& rows_2, int& columns_2)
{
	double** answer = new double*[rows_1];
	for (size_t i = 0; i < rows_1; i++)
	{
		answer[i] = new double[columns_2];
		for (size_t j = 0; j < columns_2; j++)
		{
			answer[i][j] = 0;
		}
	}
	for (size_t i = 0; i < rows_1; i++)
	{
		for (size_t j = 0; j < columns_1; j++)
		{
			for (size_t k = 0; k < columns_2; k++)
			{
				answer[i][k] += matrix_1[i][j] * matrix_2[j][k];
			}
		}
	}
	return answer;
}

void AddToList(list** node, number_t new_number)
{
	list* temp = *node;
	if (*node)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new list(new_number);
	}
	else
	{
		(*node) = new list(new_number);
	}
}



