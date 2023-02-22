#include "main.h"

/**
 * largestnumbers
 * @a: first
 * @b: second
 * @c: third
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
