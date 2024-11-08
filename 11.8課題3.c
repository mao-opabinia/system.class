#include <stdio.h>
int main()
{
    int f;
    printf("How many friends?");
    scanf("%d",&f);
    int g;
    printf("How many girls?");
    scanf("%d",&g);
    if (f>g)
    {
        printf("There are many friends!");
    }
    else if (f<g)
    {
        printf("There are many girls!");
    }
    else
    {
        printf("100 percent girls!");
    }

    return 0;
    
}