#include <stdio.h> 
#include <string.h>
#include <malloc.h>

void strev(char *);

void strev(char *str)
{
    int i=0,k=0,j;
    char *temp;
    temp=(char*)malloc(k*sizeof(char));
    k=strlen(str);
    for(i=0,j=(k-1);i<=(k/2),j>=(k/2);i++,j--)
    {
        *temp=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=*temp;
    }
}

int main()
{
    char s[100];
    int n;
    while(n!=5)
    {
        printf("N?\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("1\n");
                break;
            case 5:
                break;
            default:
            printf("no u\n");
            break;
        }
    }
}