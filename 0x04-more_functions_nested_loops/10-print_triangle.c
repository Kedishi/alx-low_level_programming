#include "main.h"


/**
 * print_triangle - prints triangle
 * @size:int
 * Return: always 0
 */

void print_triangle(int size)

{

	int i = 0;



	for (; i < size; i++)

	{

		int j = size - 1, k = 0;



		for (; j > i; j--)

		_putchar(' ');



		for (; k <= i; k++)

			_putchar('#');

		_putchar('\n');

	}

	if (i <= 0)

	_putchar('\n');

}
