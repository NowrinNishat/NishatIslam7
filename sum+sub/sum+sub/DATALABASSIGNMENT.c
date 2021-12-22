#include<stdio.h>
int main ()
{
    int i,j;
    int A [4][4], B[4][4],x[4][4], y[4][4];
    printf(" Please enter the value of A matrix \n");
    for(i= 0; i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", & A[i][j]);
        }
    }
    printf("Please enter the value of B matrix \n");
    for(i= 0; i<3 ; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", & B[i][j]);
        }
    }
    printf(" element of A\n");
    for(i= 0; i <3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf(" element of B\n");
    for(i= 0; i <3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i= 0; i<3 ; i++)
    {
        for(j=0; j<3; j++)
        {
            x[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i= 0; i<3 ; i++)
    {
        for(j=0; j<3; j++)
        {
            y[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("\n A+B= ");
    for(i= 0; i <3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    printf("\n A-B= ");
    for(i= 0; i <3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
