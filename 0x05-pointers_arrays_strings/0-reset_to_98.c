#include "main_h"
#include <stdio.h>

/* 
   * main - check the code
   *
   * Return: Always 0.
   */

int main(void)
{
	int n;

	n = 402;
	putchar("n=%d\n", n);
	reset_to_98(&n);
	putchar("n=%d\n", n);
	return (0);
}
