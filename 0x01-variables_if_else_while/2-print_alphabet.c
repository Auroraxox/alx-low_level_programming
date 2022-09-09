#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print the alphabets in lowercases/n
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
