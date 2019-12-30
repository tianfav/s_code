#include <stdio.h>
#include <string.h>

int main()
{
    char buf[] = "helllo";
    //输入打印的字符后,不会添加一个换行
    
    printf("strlen of buf: %d\n", strlen(buf));
    printf("sizeof of buf: %d\n", sizeof(buf));

    char buf2[] = "\0helllo";
    printf("strlen of buf2: %d\n", strlen(buf2)); //遇到\0就截止
    printf("sizeof buf2: %d\n", sizeof(buf2)); 

    return 0;
}

