/* weight measurement respect to the age of user*/

#include<stdio.h>

void child(float w)
    {
        if (w<10)
            printf("But Under Weight");
        else if (w>=10 && w<=15)
            printf("Normal Weight");
        else
            printf("ButOver weighted");
    }
    
void young(float w)
    {
        if (w<50)
            printf("But Under Weight");
        else if (w>=50 && w<=70)
            printf("Normal Weight");
        else
            printf("But Over weighted");
    }

void old(float w)
    {
        if (w<40)
            printf("But Under Weight");
        else if (w>=40 && w<=70)
            printf("Normal Weight");
        else
            printf("But Over weighted");
    }

int main()
{
    int a;
    float w;
  
 

    printf("Enter your age: ");
    scanf("%d", &a);

    printf("Enter your Body weight: ");
    scanf("%f", &w);

    if (a <= 10)
    {
        printf("You are a child\n");
        child(w);
    }
    else if(a>10 && a<=60)
    {
        printf("You are young\n");
        young(w);
    }
    else
    {
        printf("You are old\n");
        old(w);
    }

    return 0;
}
