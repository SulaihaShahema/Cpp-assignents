#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,r,no;
	cout<<"Enter any positive number = ";
	cin>>n;
	no=n;
	while(no>0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	cout<<"\n The reverse of the number"<<n<<" is "<<rev;
	return 0;
}
