nclude<stdio.h>
int main()
{
    int var1;
    int *p;
    printf("请输入值：");
    scanf("%d",&var1);
    p=&var1;
    var1++;
    printf("变量自增后的值为：%d\n",var1);
    *p=*p+1;
    printf("指针+1运算后的值为：%d\n",*p);
}

