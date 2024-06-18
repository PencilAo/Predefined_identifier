#define _CRT_SECURE_NO_WARNINGS
//预定义符号
//__FILE__   //进行编译的源文件
//__LINE__   //文件当前的行号
//__DATE__   //文件被编译的日期
//__TIME__   //文件被编译的时间
//__STDC__   //如果编译器遵循ANSI C,其值为1，否则未定义
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("file:%s line=%d date:%d i=%d\n", __FILE__, __LINE__, __DATE__, i);
    }

    return 0;
}