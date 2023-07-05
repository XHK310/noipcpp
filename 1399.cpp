#include <bits/stdc++.h>
using namespace std;
char a[1000][1000];//姓名 
bool s[1000];
int jia(double b,int c) 
{
	if(b>=37.5&&c==1)
	return 1;
	else
	return 0;
}
int main()
{
	double b; //体温
	int c, n,k;//c是否咳嗽，是1，否0
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b>>c;
		if(jia(b,c)==1)
		{
			s[i]=true;
			k++;
		}
		else s[i]=false;
		
	}
	
	for(int i=0;i<n;i++)
	{
		if(s[i]==true)
		cout<<a[i]<<endl;
	}
	cout<<k;
	 
}
