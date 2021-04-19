// // #include<stdio.h>

// // int main(){
// //     printf("start...\n");
// //     double t0 = 0.001;
// //     double v0 = 2.0;
// //     double x = 0;
// //     double t1 = 0;
// //     while (1)
// //     {
// //        x = v0*t0 + x;
// //        v0 = v0 -v0*t0;
// //        t1 = t1 + 0.001;
// //        printf("%lf\n",x);
// //        if (t1 >= 10)
// //        {
// //            break;
// //        }
       
// //     }
// //     printf("%lf",x);
// //     return 0;
// // }










#include<stdio.h>


int main(){
float num;
float numf;
float Ratio;
printf("How many students went to the new dining hall?\n");
scanf("%f", &num);
printf("How many of them are satisfied?\n");
scanf("%f", &numf);
//printf("num is %d\nnumf is %d\n",num,numf);
if(num!=0){
Ratio = numf/num;
//printf("%f",Ratio);
if(Ratio == 0.5f)
{
printf("Exactly half of the students are satisfied!\n");
}
else if(Ratio > 0.5f)
{
printf("More students are satisfied! :)\n");
}
else if(Ratio < 0.5f)
{
printf("More students are unsatisfied! :(\n");
}
// Prints different messages according to the ratio!
}
else{
printf("No one went to the dining hall?\n");
}


return 0;
}
// #include<stdio.h>

// int main(){
// printf("How many students went to the new dining hall?\n");
//     return 0;
// }