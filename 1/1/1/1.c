#include<stdio.h>
#include<stdlib.h>
#include"Information.h"

void main(void)
{
	Person p;
	printf("please input your name: ");
	scanf_s("%s", &p.name,8);
	printf("please input your gender(0 for woman, 1 for man):");
	scanf_s("%d", &p.gender);
	printf("please input your age: ");
	scanf_s("%d", &p.age);

	printf("\nHi! %s. ", p.name);
	if (p.gender == 0)
		printf("you are a %d-year-old woman.\n", p.age);
	else
		printf("you are a %d-year-old man.\n", p.age);
	system("pause");
}
