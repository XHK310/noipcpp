#include <bits/stdc++.h>
using namespace std;
double sum(double k)
{
	int a;
	a=ceil(k/70);
	
	return (0.1*a);

}
int main()
{
	int a,b;
	double k=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		k+=sum(b);
	}
	cout<<fixed<<setprecision(1)<<k;
}
