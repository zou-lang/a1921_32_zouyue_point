nclude<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int size,i;
    printf("请输入要开辟文件的大小:");
    scanf("%d",&size);
    p=(int * )malloc(size * sizeof(int));
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        printf("值：%d ",p[i]);
    printf("\n");
    for(i=0;i<size;i++)
        printf("地址：%p ",p+i);
    printf("\n");
}
