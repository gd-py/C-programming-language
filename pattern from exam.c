#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<2*i;j++)
            printf(" ");
        for(k=1;k<=5-i;k++)
        {
            printf("%d ",k);
        }
        for(l=4-i;l>0;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }



return 0;
}
