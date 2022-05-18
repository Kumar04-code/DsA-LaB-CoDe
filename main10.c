#include<stdio.h>
int main()
{
    int row,coll,i,j,k,temp;
    printf("Enter the row for matrix: ");
    scanf("%d",&row);
    printf("Enter the coll for matrix: ");
    scanf("%d",&coll);
    int a[row][coll];
    printf("Enter the element of matrix: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coll;j++)
            scanf("%d",&a[i][j]);
    }
      printf("original matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coll;j++)
        {

            printf("%d\t" , a[i][j]);

             printf("\n");
        }

    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        printf("/n");

    }
    printf("Transepose of matrix: \n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<coll;j++){
        printf("%d\t",a[i][j]);

      }
      printf("\n");
    }
    printf("\n");

    return 0;

}
