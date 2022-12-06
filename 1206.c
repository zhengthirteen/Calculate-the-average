#include<stdio.h>
int trans(char*x,int a,int b)
{
	if((*x)!='-')
	{
		b=10*b+(int)(*x)-'0';
		if(a==1)
		return b;
		else
		return trans(x+1,a-1,b);
	}
	else
	{
		int c=trans(x+1,a-1,b);
		return -c;
	}
}
int main(void)
{
	int n,a,b=0;
	float sum=0;
	scanf("%d",&n);
	char x[n][6];
	for(int i=0;i<n;i++)
	{
		scanf("%s",x[i]);
		a=strlen(x[i]);
		if(x[i][0]=='n'&&x[i][1]=='/'&&x[i][2]=='a')
		{
			i--;
			n--;
		}
		else
		sum=sum+trans(x[i],a,b);
	}
	if(n==0)
	printf("n/a\n");
	else
	printf("%.2f\n",sum/n);	
	return 0;
}
