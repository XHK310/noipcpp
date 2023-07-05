#include <bits/stdc++.h>
using namespace std;
char a[100000];
int main()
{
    scanf("%s",a);
	if(a[strlen(a)-1]=='r'&&a[strlen(a)-2]=='e'||a[strlen(a)-1]=='y'&&a[strlen(a)-2]=='l')
	{
		a[strlen(a)-1]=' ';
		a[strlen(a)-2]=' ';
		
	 } 
	 if(a[strlen(a)-1]=='g'&&a[strlen(a)-2]=='n'&&a[strlen(a)-3]=='i')
	 {
	 	a[strlen(a)-1]=' ';
	 	a[strlen(a)-2]=' ';
	 	a[strlen(a)-3]=' ';
	 }
	 
	 printf("%s",a);
	 return 0;
}
