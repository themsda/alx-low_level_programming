#include <stdio.h>

/**
 * reset_to_98 - sets the value pointed to by the passed pointer to 98.
 *
 * Return: Always 98.
 */
void reset_to_98(int *p)
{
	*p = 98;
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
