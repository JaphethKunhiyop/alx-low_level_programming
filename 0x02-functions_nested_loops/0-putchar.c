 #include "main.h"

/**
 *main - function prints text as output
 *
 * Return: return 0
 */

int main(void)
{
	char college[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(college[i]);
	}
	_putchar('\n');

	return (0);
}
