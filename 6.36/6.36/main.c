#include <stdlib.h>
#include <stdio.h>

#define max 100

int main()
{
	char input[max],a=0;
	int n=0;
	printf("Enter a string: ");
	gets_s(input,max);

	while (n < max)
	{
		a = input[n++];
		if (a == '\0') break;
	}

	while (n != -1)
		printf("%c", input[n--]);

	printf("\n");
	system("pause");
}