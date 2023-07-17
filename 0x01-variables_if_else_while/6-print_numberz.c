#include <stdio.h>

/**
 *main - Entry point
 *Description: 'print alphabets lowercase and uppercase'
 *Return: Always 0
 */
int main(void)
{
        int n;

        for (n = 48; n < 58; n++)
        {
                putchar(n);
        }
        putchar('\n');
	return (0);
}
