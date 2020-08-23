#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
	int num[7], temp;
	int i, j;
	system("cls");
	printf("Please enter seven integer number : ");
	for (i = 0; i < 7; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < 6; i++)
		for (j = 0; j < 6; j++)
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
	printf("First maximum number  : %d\n", num[6]);
	printf("Second maximum number : %d\n", num[5]);
	printf("First mininum number  : %d\n", num[0]);
	printf("Second mininum number : %d\n", num[1]);
}