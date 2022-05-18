#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
     printf("Enter first matrix: \n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

     printf("Enter secand matrix: \n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    }

    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j] +=a[i][k]*b[k][j];
        }

    }
    printf("The product of the two matrix is: \n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
            printf("%d\t",c[i][j]);

            printf("\n");
    }
     return 0;




}
