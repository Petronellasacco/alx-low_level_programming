#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'print alphabets lowercase and uppercase'
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 90)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
