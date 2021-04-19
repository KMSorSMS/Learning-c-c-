#include<stdio.h>

int main(){
    printf("start...\n");
    double t0 = 0.001;
    double v0 = 2.0;
    double x = 0;
    double t1 = 0;
    while (1)
    {
       x = v0*t0 + x;
       v0 = v0 -v0*t0;
       t1 = t1 + 0.001;
       printf("%lf\n",x);
       if (t1 >= 10)
       {
           break;
       }
       
    }
    printf("%lf",x);
    return 0;
}