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
        printf("Gezi Wang has been sent to hospital.\n");
    }
    
    return i;
    
}

float cal(int hour1,int minute1,int hour2,int minute2,float mood,int mode){
        float time;  /*是加血时间*/
        time = minute2-minute1+60*(hour2-hour1);
        printf("the period is:%.2f\n",time);
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
        printf("%d\n",i/4);
    }
    time[0] =8;
    time[1] =0;
    time[(class_num*4)+2]=22;
    time[(class_num*4)+3]=0;
    for (int i = 0; i < (class_num*4)+2; i = i+2)
    {
        printf("i'm calculating...%d\n",(i/2)+1);
       int hour1 = time[i];
       int hour2 = time[i+2];
       int minute1 = time[i+1];
       int minute2 = time[i+3];
        printf("%d\t%d\n",hour1,minute1);
        printf("%d\t%d\n",hour2,minute2);
        printf("mode is:%d\n",(i/2)%2);
        mood = cal(hour1,minute1,hour2,minute2,mood,(i/2)%2);
        printf("mood is : %.1f\n",mood);
        printf("--------------------------------\n");
        if(mood<=0){
            break;
        }
    }
    
    if(mood>0){
    printf("His mood level is:%.1f",mood);
    }
    return 0;
    
}