#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: function taking a pointer to an int & updates value points to 98
 * Return : Always 0.
 * */

int main(void)
{
	void reset_to_98(int *n);
	int my_int = 98;
	int* my_ptr = &my_int;
	update_value(my_ptr);
	return (0);
}
