#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	bool flag=true;
	for(int i=a;i<=b;i++)
	{
		flag=true;
		if(i==0||i==1)
		continue;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			}
		}
		if(flag)
		cout<<i<<" ";
	}
}
