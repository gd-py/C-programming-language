#include<stdio.h>
int checkprime(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(checkprime(n))
        printf("Prime number!");
    else
        printf("Composite number!");

return 0;
}

int checkprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
