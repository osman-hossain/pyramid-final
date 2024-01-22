#include<stdio.h>
int num,row,ro,col,space,count=0,k;

int main()
{
    printf("Enter the number : ");
    scanf("%d",&num);

    for(row=1; row<=num; row=row+2)
    {

        if(row<=9)
        {
            count=count+1;
            k=(num-row)+count;

            for(space=6; space<=k; space++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {

                printf("%d",col);
            }
            printf("\n");
        }
    }
    display();
}

void display()
{
    for(row=10; row<=num; row=row+2)
    {
        for(space=1; space<=(num-row)/2; space++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    getchar();
}