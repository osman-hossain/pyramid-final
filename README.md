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

// write a programme that print pyramid star

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,col,space;
        printf("Enter the number : ");
        scanf("%d",&num);

        for(row=1; row<=num; row=row+2)
        {
            for(space=1; space<=(num-row)/2; space++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
```
![pic](./images/star.png)

// write a programme that print diamond pattern

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,col,space,nu,ro,co,sp;
        printf("Enter the number : ");
        scanf("%d",&num);

        for(row=1; row<num; row=row+2)
        {
            for(space=1; space<=(num-row)/2; space++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("*");
            }
            printf("\n");
        }


        for(ro=num; ro>=1; ro=ro-2)
        {
            for(sp=1; sp<=(num-ro)/2; sp++)
            {
                printf(" ");
            }
            for(co=1; co<=ro; co++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}
```

![diamond](./images/diamond.png)

### write a programme that pritnt inverted pytamid or triangle

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,col,space,nu,ro,co,sp;
        printf("Enter the number : ");
        scanf("%d",&num);


        for(ro=num; ro>=1; ro=ro-2)
        {
            for(sp=1; sp<=(num-ro)/2; sp++)
            {
                printf(" ");
            }
            for(co=1; co<=ro; co++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}
```

<image src="./images/invertedstar.png" width="700" title="TriangleInverted">

### write a programme that print alphabet triangle

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,col,space,nu,ro,co,sp;
        printf("Enter the number : ");
        scanf("%d",&num);

        for(row=1; row<num; row=row+2)
        {
            for(space=1; space<=(num-row)/2; space++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%c"col+64);
            }
            printf("\n");
        }
    }
}
```
![bigletter](./images/bigletter.png)

### write a programme that print inverted triangle with alphabet

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,col,space,nu,ro,co,sp;
        printf("Enter the number : ");
        scanf("%d",&num);

        for(ro=num; ro>=1; ro=ro-2)
        {
            for(sp=1; sp<=(num-ro)/2; sp++)
            {
                printf(" ");
            }
            for(co=1; co<=ro; co++)
            {
                printf("%c",co+96);
            }

            printf("\n");
        }
    }
}
```

![alpha](./images/smallletter.png)

### write a programme that print diamond with remainder row and column

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,col,space,nu,ro,co,sp;
        printf("Enter the number : ");
        scanf("%d",&num);

        for(row=1; row<num; row=row+2)
        {
            for(space=1; space<=(num-row)/2; space++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("*");
            }
            printf("%d",row%2);
        }


        for(ro=num; ro>=1; ro=ro-2)
        {
            for(sp=1; sp<=(num-ro)/2; sp++)
            {
                printf(" ");
            }
            for(co=1; co<=ro; co++)
            {
                printf("%d",col%2);
            }

            printf("\n");
        }
    }
}
```
![remainder](./images/remainder.png)

// write a programme that print triangle with space

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,ro,col,co,space,sp;

        printf("Enter The Number : ");
        scanf("%d",&num);

        for(row=1; row<num; row++)
        {
            for(space=1; space<=num-row; space++)
            {
                printf(" ");
            }

            for(col=1; col<=row; col++)
            {
                printf("%d ",col);
            }
            printf("\n");
        }

        for(ro=num; ro>=1; ro--)
        {
            for(sp=1; sp<=num-ro; sp++)
            {
                printf(" ");
            }

            for(co=1; co<=ro; co++)
            {
                printf("%d ",co);
            }
            printf("\n");
        }
    }
}
```
![space](./images/space.png)

<p> Add this code on both column to show in middle </p>

- `for(space=1; space<=(num-row)+50; space++);`
- `for(sp=1; sp<=(num-row)+50; space++);`

<image src="./images/middlescreen.png"  title="screenmiddle"/>

### Alphabet
```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,ro,col,co,space,sp;

        printf("Enter The Number : ");
        scanf("%d",&num);

        for(row=1; row<num; row++)
        {
            for(space=1; space<=(num-row)+50; space++)
            {
                printf(" ");
            }

            for(col=1; col<=row; col++)
            {
                printf("%c ",col+64);
            }
            printf("\n");
        }

        for(ro=num; ro>=1; ro--)
        {
            for(sp=1; sp<=(num-ro)+50; sp++)
            {
                printf(" ");
            }

            for(co=1; co<=ro; co++)
            {
                printf("%c ",co+64);
            }
            printf("\n");
        }
    }
}
```

![alpha](./images/alpha.png)

### small lettter

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,ro,col,co,space,sp;

        printf("Enter The Number : ");
        scanf("%d",&num);

        for(row=1; row<num; row++)
        {
            for(space=1; space<=(num-row)+50; space++)
            {
                printf(" ");
            }

            for(col=1; col<=row; col++)
            {
                printf("%c ",col+97);
            }
            printf("\n");
        }

        for(ro=num; ro>=1; ro--)
        {
            for(sp=1; sp<=(num-ro)+50; sp++)
            {
                printf(" ");
            }

            for(co=1; co<=ro; co++)
            {
                printf("%c ",co+97);
            }
            printf("\n");
        }
    }
}

```
![small](./images/small.png)

### diamond
```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,row,ro,col,co,space,sp;

        printf("Enter The Number : ");
        scanf("%d",&num);

        for(row=1; row<num; row++)
        {
            for(space=1; space<=(num-row)+50; space++)
            {
                printf(" ");
            }

            for(col=1; col<=row; col++)
            {
                printf("* ");
            }
            printf("\n");
        }

        for(ro=num; ro>=1; ro--)
        {
            for(sp=1; sp<=(num-ro)+50; sp++)
            {
                printf(" ");
            }

            for(co=1; co<=ro; co++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
```
![diamond](./images/dimo.png)
</br>

W _o_ ~~r~~ k `is` _d_ ~~o~~ne

# Thank you

edit is goint on ...