#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int rows,sp;
	int j;
	cout<<"enter the rows"<<endl;
	cin>>rows;
	for(int i=rows;i>=1;--i)
	{
		for(sp=0;sp<rows-i;++sp)
		
		cout<<" ";
		
		for(j=i;j<=2*i-1;++j)
		
			cout<<"*";
			
		for(j=0;j<i-1;j++)
		
		cout<<"*";
		
	cout<<endl;
	}
	
	return 0;
}
