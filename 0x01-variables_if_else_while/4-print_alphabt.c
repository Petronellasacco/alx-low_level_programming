#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'print alphabets lowercase and uppercase'
 * Return: Always 0
 */
int main(void)

{
	char ch = 'a';

	while (ch <= 'z');
	{
		if ((ch != 'e') && (ch != 'q'));
		{
			putchar(ch);
		}
	}
		putchar('\n');
		return (0);
}
