#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//以下是牛客网刷题--鹏哥训练营-2022_06_08开始

//1,BC7 缩短二进制
#if(0)
int main()
{
	//printf("0%o, 0X%X\n",1234,1234);
	printf("%#o, %#X\n",1234,1234);//%与X之间加上#,就代表着前缀0X，o与%之间加上#,就代表着前缀0
	return 0;
}
#endif//编译结果：02322, 0X4D2    --02322最开始的0，代表着8进制形式输出；0X代表着16进制大写形式输出，0x代表着16进制小写输出

//2, 将1234倒着输出4321.
#if(1)
int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf("%d", n % 10);
		n=n / 10;
	}
	return 0;
}
#endif//编译结果：4321