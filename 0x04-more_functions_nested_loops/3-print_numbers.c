#include "main.h"

/**
 * main: function prints number from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;


	for (; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');

}
