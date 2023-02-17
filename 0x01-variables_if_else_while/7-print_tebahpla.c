#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n = 26;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	while (n > 0)
	{
		putchar(alphabet[--n]);
	}
	putchar('\n');

	return (0);
}
