#include <stdio.h>

/**
 * main - prints to string
 * Description: prints "and that piece of art is useful.." without puts
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
