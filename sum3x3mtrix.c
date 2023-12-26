#include<stdio.h>

void main()
{
    int i,j,mat1[3][3],mat2[3][3],sum[3][3];
    printf("enter first matrix elements");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter second matrix elements");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("matrix first elements are\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
     printf("matrix second elements are\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    //sum[3][3]
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("sum of two matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}