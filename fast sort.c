/*本次的目的时包装出一个fast——sort函数，用户
可以输入最多1000个数，函数将数字从大到小输出*/

#include<stdio.h>

float a[1001];
int n;

void fast_sort(int left,int right){
    if(left>=right){               //如果是==会出问题如9 8 7 6 19 26排序时;实际上这种情况递归的最后一层因为前面j已经被移动到了与i相遇所以i没有移动，然而进入递归时i-1就会比right还小导致递归中不能return;
        return;
    }
    int i = left;                  //调用函数时传入两端的索引值；将初始索引值保存入j、i;
    int j = right;
    while(i!=j){                  //在j的索引与i未相遇前都不停让j、i相互追击换序;     
    while(a[j]<=a[left]&&j>i){  //j向左移动直到遇到一个比右端索引大的数(注意是最右端),并且j与i相遇也立即停止j、i的移动;
        j--;
    }
    while(a[i]>=a[left]&&j>i){  //i在j固定到大于left基准点后向右移动到比基准点小的数上，且若j与i相遇立刻停止；
        i++;
    }
    //换序
    float t = a[j];
    a[j] = a[i];
    a[i] = t;
    }
    //将基准数换到“中间”;
    float t = a[left];
    a[left] = a[i];
    a[i] = t;
    fast_sort(left,i-1);     //通过递归，将基准数左边继续排序;
    fast_sort(i+1,right);    //通过递归，将基准数右边继续排序；
    return;
}

int main(){
    printf("input your size first:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%f",&a[i]);
    }
    fast_sort(1,n);
    for(int i=1;i<=n;i++){
        printf("%f ",a[i]);
    }
    return 0;
    
}