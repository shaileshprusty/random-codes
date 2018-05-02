#include<stdio.h>
void main()
{
        int i, j, k;
        printf("No of lines: ");
        scanf("%d", &i);
        for(j=i; j>0; --j)
        {
                for(k=0; k<i-j; ++k)
                        printf(" ");
		for(k=0; k<j; ++k)
                        printf("& ");
                printf("\n");
        }
}
