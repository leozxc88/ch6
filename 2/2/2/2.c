#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	typedef struct _dates
	{
		int year, month, day;
	}date;
	typedef struct _order
	{
		char num[11];
		date date;
		int amount;
	}order;
	order ord1 = { "AHK08A1024",{2008,10,5},886686688 };
	order ord2 = { "USA08A1025",{2008,11,12},1234567 };
	order ord3 = { "UNK08A1028",{2008,12,30},98765432 };
	
	printf("		   *****************\n");
	printf("		    *****�q�f���****\n");
	printf("		   *****************\n");
	printf(" ==============================================\n");
	printf(" �q�f�s��	    �q�f���	     �q�f���B\n");
	printf(" ==============================================\n");
	printf("                 *****************\n");
	printf("%-10s %8d/%02d/%02d       Nt%10d\n",ord1.num,ord1.date.year,ord1.date.month,ord1.date.day,ord1.amount);
	printf("%-10s %8d/%02d/%02d       Nt%10d\n", ord2.num, ord2.date.year, ord2.date.month, ord2.date.day, ord2.amount);
	printf("%-10s %8d/%02d/%02d       Nt%10d\n", ord3.num, ord3.date.year, ord3.date.month, ord3.date.day, ord3.amount);
	printf("\n\n");
	system("pause");
}