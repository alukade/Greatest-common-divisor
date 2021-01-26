#include<stdio.h>
int main()
{
	int m, n, i, temp;
	printf("请输入两个值：");
	scanf_s("%d %d", &m, &n);
	if (m < n)//m储存大数，n储存小数。果刚好m储存了大数，n储存了小数，则不做变化
	{
		temp = m;
		m = n;
		n = temp;//交换m,n
	}
	for (i = n; i > 0; i--)
		if (m % i == 0 && n % i == 0) 
		{
			printf("%d 和 %d 的最大公约数是 %d", m, n, i);
			break;
		}
	return 0;
}
//两个数的最大公约数一定不会超过这两个数中的最小值，因此把两个数中的最小值找出来，令其为i。用m和n分别对i求余
//如果刚好余数都为0，则该数为最大公约数
//如果余数不为0，则对较小数自减并求余，经过多次循环求得最大公约数
//找到最大公约数后即结束循环，break