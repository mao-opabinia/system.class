#include <math.h>
#include <stdio.h>

int main(void)
{
    double a,b,c,D,x1,x2;
    
    printf("ax^2+bx+c=0のa b cを入力してください>>>");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(a == 0.0)
    {
        if(b == 0.0)
        {
             printf("係数がおかしい。\n");
        }
        else
        {
              x1 = -c/b;
              printf("解は、%gです。\n",x1);
        }
    }
    else
    {
        D =b*b-4*a*c;
        if(D>=0.0)
        {
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a);
            if(D == 0)
            {
                printf("解は、重解となり%gです。\n",x1);
            }
            else
            {
                printf("解は、%gと%gです。\n",x1,x2);
            }
        }
        else
        {
            printf("虚数解となるため、解はありません。\n");
        }
    }
    return 0;
}
