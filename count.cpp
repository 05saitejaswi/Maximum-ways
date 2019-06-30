#include<bits/stdc++.h>
using namespace std;
main()
{
	cout<<"Enter test";
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cout<<"Enter number";
		int n;
		cin>>n;
		if(n%2==0)
		{
			cout<<(n/2)+1;
		}
		else
		{
			cout<<(n+1)/2;
		}
		cout<<endl;
	}
}
