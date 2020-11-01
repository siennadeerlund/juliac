#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	int b;
	int c;
	int wynik;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	wynik = a + b + c;
	printf("%d\n", wynik);
	return EXIT_SUCCESS;
}