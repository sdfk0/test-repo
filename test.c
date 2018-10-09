#include<stdio.h>
#include<malloc.h>

int main()
{
    int i,j,m,n,pr=0,s=0,all=0;
    int *p[10];
    printf("Row,col\n");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        p[i]=(int*)malloc(m*n*sizeof(int));
    printf("Matrix?:\n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        {
            scanf("%d",*(p+i)+j);
            all=all+*(*(p+i)+j);
            if(i==j)
                pr=pr+*(*(p+i)+j);
        }
    for(i=0,j=n-1;i<m&&j>=0;i++,j--)
        s=s+*(*(p+i)+j);
    printf("pr:%d\n",pr);
    printf("sec:%d",s);
    printf("all:%d\n",all);

}