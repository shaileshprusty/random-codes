#include<stdio.h>
void main()
{
        int i, j, k;
        printf("No of lines: ");
        scanf("%d", &i);
        for(j=i; j>0; j-=2)
        {
                for(k=0; k<(i-j)/2; ++k)
                        printf("  ");
                for(k=0; k<j; ++k)
                        printf("& ");
                printf("\n");
        }
}

