#include<stdio.h>

int main()
{  int *var1,*var2,*var3,*temp,*temp2;
    int a,b,c;
    printf("请依次输入三个整数：");
    scanf("%d,%d,%d",&a,&b,&c);
    var1=&a;
    var2=&b;
    var3=&c;
    temp=var2;
    var2=var1;
    temp2=var3;
    var3=temp;
    var1=temp2;
    printf("原始的输入值为：var1=%d var2=%d var3=%d\n",a,b,c);
    printf("变量的地址为 var1：%p var2：%p var3：%p\n",var1,var2,var3);
    printf("变量交换后值为：var1=%d var2=%d var3=%d\n",*var1,*var2,*var3);
}
