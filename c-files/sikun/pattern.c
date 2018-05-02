#include<stdio.h>
void main()
{
	int i;
	printf("No of lines: ");
	scanf("%d", &i);
	for(i; i>0; --i)
	{
		for(int j=i; j>0; --j)
			printf("& ");
		printf("\n");
	}
}
