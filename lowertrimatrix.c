#include<stdio.h>
int main()
{
    int i,j,a[3][3];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the element in %d row and %d column:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //printing the lower triangular matrix
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            if (i>=j)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    
}