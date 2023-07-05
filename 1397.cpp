#include <iostream>
using namespace std;
int a(int x,char b,int y)
{
	if(b=='+')
	return (x+y);
	if(b=='-')
	return (x-y);
	if(b=='*')
	return (x*y);
	if(b=='/')
	return (x/y);
	if(b=='%')
	return (x%y);
 } 
int main()
{
	int x,y;
	char b;
	cin>>x>>b>>y;
	cout<<a(x,b,y); 
 } 
