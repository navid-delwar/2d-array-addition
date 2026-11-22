#include<stdio.h>
int main ()
{
    int m,j;
    int X[2][2]={{3,2},{5,6}},Y[2][2]={{7,7},{7,7}},Z[2][2];
    printf("X:\n");
    for(int m=0;m<2;m++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",X[m][j]);
        }
        printf("\n");
    }
    printf("Y:\n");
    for(int m=0;m<2;m++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",Y[m][j]);
        }
        printf("\n");
    }
    for(int m=0;m<2;m++)
    {
        for(int j=0;j<2;j++)
        {
           Z[m][j]=X[m][j]+Y[m][j];
        }
    }
    printf("sum (X+Y):\n");
    for(int m=0;m<2;m++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",Z[m][j]);
        }
        printf("\n");

    }
return 0;
}
