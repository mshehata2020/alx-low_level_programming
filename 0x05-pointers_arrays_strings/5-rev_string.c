#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i, mid;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	mid = len / 2;

	while (mid--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
