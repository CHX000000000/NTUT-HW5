#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void bubble_sort(int[]);

int main()
{
	int D[SIZE] = { 0 }, i;

	printf("Enter 5 integer :\n");
	for (i = 0;i < SIZE;i++)
		scanf_s("%d", &D[i]);

	bubble_sort(D);

	printf("\nMaximun : %d\n",D[SIZE-1]);

	system("pause");
	return 0;
}

void bubble_sort(int data[])
{
	int i, j, temp;
	int n = SIZE;
	for (i = n - 1;i >= 0;i--)
	{
		for (j = 0;j < i;j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
}