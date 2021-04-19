// #include <stdio.h>

// void abosolute(float i){
//     if (i<=0)
//     {
//        i = -i ;/* code */
//     }
    
// }

// void print_all(int *time,int size){
//     for(int i=0;i<size;i++){
//         printf("%d\n",(*time));
//         time++;
//     }
// }

// int main(){
//     int time[12];
//     for(int i=0;i<12;i=i+4){
//         scanf("%d:%d-%d:%d",&time[i],&time[i+1],&time[i+2],&time[i+3]); 
//         printf("%d\n",i/4);
//     }
//     print_all(time,12);
// }

// //     int i;
// //     // int c;
// //     scanf("%d",&i);
// //     // c = i;
// //     // if(i<=0){
// //     //     i = -i;
// //     // }
// //     // if (i>=5)
// //     // {
// //     //     i = 5;/* code */
// //     // }
// //     // abs(i);
// //     // int a = 5;
// //     // i = a;
// //     // printf("%d\n",c);
// //     printf("%d",i);
// //     return 0; 

// // }
// // // void print_all(int *time,int size){
// // //     // printf("%d",time[3]);
// // //     // printf("%d",(*time));
// // //     // for(int i=0;i>-1;i++){
// // //     //     printf("%d",time[i]);
// // //     // }
// // //     for(int i=0;i<(sizeof(time)/sizeof(int));i++){
// // //         printf("%d",(*time)[i]);
// // //     }
// // // }

// // // int main(){
// // //     int a[10] = {1,2,3,4,5,6,7,8,9};

// //     print_all(a);
// // }




/*学习了注释*/
/*
这样也可以
*/
//甚至这样
//这个是单行注释
#include <stdio.h>
void print_all(int *time,int size){
    for(int i=0;i<size;i++){
        printf("%d\n",(*time));
        time++;
    }
}

float check(float i){
    
    if (i>=100)
    {
        i = 100;/* code */
    }
    if (i<=0)
    {
        i = -100000000000;
    }
    
    return i;
    
}

float cal(int hour1,int minute1,int hour2,int minute2,float mood,int mode){
        float time;  /*是加血时间*/
        time = minute2-minute1+60*(hour2-hour1);
       
    if (mode==0)
    {
        mood = mood+time*0.5;
        mood = check(mood);
    }
    else{
        if (time>60)
        {
            mood = mood-24-(time-60)*0.8;
            mood = check(mood);

        }
        else{
            mood = mood-time*0.4;
            mood = check(mood);
        }
        
    }
    return mood;
    
}


int main() 
{   
    int class_num;
    float mood=100.0;

    printf("How many lectures tody?\n");
    scanf("%d",&class_num);
    int time[(class_num*4)+4];
    for(int i=2;i<(class_num)*4+2;i=i+4){
        scanf("%d:%d-%d:%d",&time[i],&time[i+1],&time[i+2],&time[i+3]); 
    }
    time[0] =8;
    time[1] =0;
    time[(class_num*4)+2]=22;
    time[(class_num*4)+3]=0;
    for (int i = 0; i < (class_num*4)+2; i = i+2)
    {
       int hour1 = time[i];
       int hour2 = time[i+2];
       int minute1 = time[i+1];
       int minute2 = time[i+3];
        mood = cal(hour1,minute1,hour2,minute2,mood,(i/2)%2);
    }
    
    if(mood>0){
    printf("His mood level is %.1f at the end of the day.\n",mood);
    }
    else{
        printf("Gezi Wang has been sent to hospital.\n");
    }
    return 0;
    
}