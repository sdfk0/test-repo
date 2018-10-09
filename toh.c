#include<stdio.h>

void tower(int,char,char,char);

int main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    tower(n,'A','C','B');
}

void tower(int n, char fpeg, char topeg, char midpeg )
{
    if(n==1)
    {
        printf("MOve disk %d from %c to %c\n",n,fpeg,topeg);
        return;
    }
    tower(n-1,fpeg,midpeg,topeg);
    printf("move disk %d from %c to %c\n",n,fpeg,topeg);
    tower(n-1,midpeg,topeg,fpeg);
}