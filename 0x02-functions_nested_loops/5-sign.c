#include "main.h"
/**
 * print_sign - Program prints the sign of a number
 * returns 0 letter not lowercase, 1 letter lowercase
 * @n: the int to print
 * Return: End of program.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
