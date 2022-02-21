#include <stdio.h>

int main()
{
	int cislo = 432634;
	int soucet = 0;

	for (; cislo > 0; soucet += cislo % 10, cislo /= 10);
		printf("ciferny soucet je %d", soucet);
}
