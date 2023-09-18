#include <stdio.h>

/**
 * reset_to_98 - rest passed value to 98.
 *
 * Return: Always 98.
 */
int reset_to_98(int *p)
{
	*p = 98;
	return *p;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
