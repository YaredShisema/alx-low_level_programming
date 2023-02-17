#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n = 0;

	for (n = '0'; n <= '9'; n++)
	{
		putchar((char) n);
	}
	putchar('\n');

	return (0);
}
