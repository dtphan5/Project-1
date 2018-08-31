#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#pragma warning(disable: 4996)
#include <iostream>



int main()
{
	FILE *fout;
	int w,icount =0, sum = 0;
	fout = fopen("C:\\Users\\phand\\source\\repos\\Homework_1\\out.txt", "w");
	printf("Write one integer at a time.\n");
	while (scanf("%d",&w) != EOF)
	{
		printf("+1\n");
		fprintf(fout, "%d\n", w);
		printf("Keep entering integers unless you want to exit, then hit control Z.\n");
			icount = icount + 1;
			sum = sum + w;
			;
	}
	if (scanf("%d", &w) == EOF)
		printf("-1\n");
	fprintf(fout,"The %d integers entered in this file sum to %d\n", icount, sum);
	printf("The %d integers entered in this file sum to %d\n", icount, sum);
	fclose(fout);
	system("pause");
	return 0;
}


