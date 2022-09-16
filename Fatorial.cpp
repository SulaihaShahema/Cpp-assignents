#include<iostream>
using namespace std;
int fact(int a)
{
	if(a==1)
	{
		return a;
	}
	else
	{
		return (a*fact(a-1));
	}
}
int main()
{
	int a, ans;
	cout<<"Enter the input= ";
	cin>>a;
	ans=fact(a);
	cout<<"\nThe factorial of "<<a<<" is "<<ans;
	return 0;
}
