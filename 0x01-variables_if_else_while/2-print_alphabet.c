#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n = 0;
	char alphabet[28] = "abcdefghijklmnopqrstuvwxyz";

	while (alphabet[n] != '\0')
	{
		putchar(alphabet[n]);
		n++;
	}
	putchar('\n');

	return (0);
}
