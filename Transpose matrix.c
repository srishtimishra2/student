/*Read a  matrix  and print its transpose.*/
#include<stdio.h>
int main()
{
    int i,j,r,c;
    int array[r][c];
    printf("Enter the no. of rows:\n");
    scanf("%d",&r);
    printf("Enter the no. of coloumns:\n");
    scanf("%d",&c);
    printf("Enter the value of %d*%d matrix:\n ",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Print the matrix before transpose:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    int array2[c][r];
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
           array2[i][j]= array[j][i];
        }
    }
    printf("print the matrix after transpose:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
