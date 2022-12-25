#include <stdio.h>
int main() 
{
    int i,j,a[4][4],b[4][4],c[4][4],k;
    printf("\nprint fir met elements : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("a[%d][%d] : ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix : 2 \n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nprint sec met elements : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("a[%d][%d] : ",i,j);
           scanf("%d",&b[i][j]);
        }
    }
    printf("\nmatrix : 1 \n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=0;
            for(k=0;k<=2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nmultiplication of matrix 1 and 2 : \n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
