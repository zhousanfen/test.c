#include <stdio.h>
int main(void)								//括号里加不加 void 发现不影响结果，暂时不知道其原理 
{
	int i;
	float sum = 0.0;
	for(i=1;i<=100;i++)						//注意括号里的是分号不是逗号！！ 
	{
		sum = sum + 1/(float)i;				//强制类型转换，不推荐这样写，建议 sum = sum +1.0/i; 
		
		
		
	}
	printf("sum = %f\n",sum);
	
return 0;
}
