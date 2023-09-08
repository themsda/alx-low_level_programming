#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the size of different data types
 * Return: Always 0 (Success)
 */

int main(void)
{
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of float: %lu bytes\n", sizeof(float));
    return (0);
}
