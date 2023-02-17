#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n = 0;
	int m = 0;
	char alphabet_in_lowercase[28] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_in_uppercase[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alphabet_in_lowercase[n] != '\0')
	{
		putchar(alphabet_in_lowercase[n]);
		n++;
	}
	while (alphabet_in_uppercase[m] != '\0')
	{
		putchar(alphabet_in_uppercase[m]);
		m++;
	}
	putchar('\n');

	return (0);
}

