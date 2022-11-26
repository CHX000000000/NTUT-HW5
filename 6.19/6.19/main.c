#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int i, total[11] = { 0 }, a, b;
	srand(time(NULL));
	for (i = 0;i < 36000;i++)
	{
		a = (rand() % 6) + 1;
		b = (rand() % 6) + 1;
		switch (a+b)
		{
		case 2: 
			total[0]++;
			break;
		case 3:
			total[1]++;
			break;
		case 4:
			total[2]++;
			break;
		case 5:
			total[3]++;
			break;
		case 6:
			total[4]++;
			break;
		case 7:
			total[5]++;
			break;
		case 8:
			total[6]++;
			break;
		case 9:
			total[7]++;
			break;
		case 10:
			total[8]++;
			break;
		case 11:
			total[9]++;
			break;
		case 12:
			total[10]++;
			break;
		default:
			break;
		}
	}
	for (i = 0;i < 11;i++)
		printf("%2d%7d\n", i + 2, total[i]);
	system("pause");
	return 0;
}