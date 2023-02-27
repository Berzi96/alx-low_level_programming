#include "main.h"
/**
 * swaps int - swaps values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
