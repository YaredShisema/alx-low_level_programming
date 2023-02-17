#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n = 0;
	char base16[28] = "0123456789abcdef";

	while (base16[n] != '\0')
	{
		putchar(base16[n++]);
	}
	putchar('\n');

	return (0);
}

