#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 5, 7, 14, 20, 22, 32, 40, 44, 56, 57, 73, 90, 93 };

	printf("�п�J���j�M�����: ");
	scanf_s("%d", &search);

	ans = binarysearch(data, search, sizeof(data) / sizeof(int));

	if (ans < 0)
		printf("�䤣�� %d\n", search);
	else
		printf("�b�� %d ����Ƨ�� %d\n", ans + 1, search);

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == search)
			return mid;
		else if (data[mid] > search)
			high = mid - 1;
		else if (data[mid] < search)
			low = mid + 1;
	}

	return -1;
}