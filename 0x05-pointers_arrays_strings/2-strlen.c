#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * b = No, string length
 * @s: The length of a string
 * Return: length
 */

int _strlen(char *s)
{
	int b = 0;

	while (*s != '\0')
	{
		b++;
		s++;
	}

	return (b);
}
