#include <stdio.h>
int main(void)								//������Ӳ��� void ���ֲ�Ӱ��������ʱ��֪����ԭ�� 
{
	int i;
	float sum = 0.0;
	for(i=1;i<=100;i++)						//ע����������ǷֺŲ��Ƕ��ţ��� 
	{
		sum = sum + 1/(float)i;				//ǿ������ת�������Ƽ�����д������ sum = sum +1.0/i; 
		
		
		
	}
	printf("sum = %f\n",sum);
	
return 0;
}
