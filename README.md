<!--pattern-->
P__y__~~r~~`amid`
---
//write a programme that print pyramid

```c
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
```
<image src="./images/gambuj.png" width="400" title="pic"/>

<!--![pic](./images/gambuj.png)-->

### _ano_ ~~t~~ `her`

<p> write a programme that print pyramid</p>

#include<stdio.h>
int num,row,col,space,count=0;

[x] pattern
[x] pyramid
[x] numaric
[]  

```c
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
```
</br>

<image src="./images/pyramid.png" width="400" title="pyramid"/>

edit is goint on ...