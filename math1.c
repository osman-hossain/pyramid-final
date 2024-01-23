#include<stdio.h>
int num,row,col,space,count=0;


int main()
{
    printf("Enter the number : ");
    scanf("%d",&num);
    for(row=1; row<=9; row=row+2)
    {
        for(space=1; space<=(num-row)/2; space++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    display();
}

void display()
{
    for(row=10; row<=num; row=row+2)
    {
        for(space=2; space<=(num-row)/2; space++)
        {
            printf(" ");
        }
        for(col=1; col<=row-count; col++)
        {
            printf("%d",col);
        }
        count=count+1;
        printf("\n");
    }
    getchar();
}