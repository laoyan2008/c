#include <stdio.h>
char arr[1024];
int index = 0;

int main()
{
    printf("欢迎使用敏感字符管理系统\n");
    while (1)
    {

        printf("1---添加一个敏感字符\n");
        printf("2---删除最后一个敏感字符\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换敏感字符\n");
        printf("5---退出\n");

        printf("请输入要使用的功能\n");

        int code;
        scanf("%d",&code);
        if(code==1)
        {
            printf("请输入要添加的敏感字符");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            arr[index]=m;
            index++;
            printf("添加成功\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code==2)
        {
            printf("删除最后一个敏感字符\n");
            if(index=0)
            {
            printf("当前无可删除敏感字符\n");
            }
            else
            {
            index--;
            printf("删除成功，回车继续\n");
            }
            char x;
            scanf("%C",&x);
            scanf("%C",&x);

        }
        if(code==3)
        {
            printf("当前所有敏感字符为;\n");
            for(int i=0;i<index;i++)
            {
                printf("第%d个敏感字符为%c\n",i+1,arr[i]);
            }
            printf("回车继续\n");
            char x;
            scanf("%C",&x);
            scanf("%C",&x);
        }
        if(code==4)
        {

        }
        if(code==5)
        {
            break
        }
    }

    return 0;
}