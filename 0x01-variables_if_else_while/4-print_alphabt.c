#include <stdio.h>

/**
 * main - program execution starts here
 * Description: this is the main function
 * Return: an integer to signify success or fail
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
