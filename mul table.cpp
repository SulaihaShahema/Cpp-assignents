//To print the multiplication table
#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter the input"<<endl;
	cin>>no;
	cout<<"The multiplication table of "<<no<<" is"<<endl;
	for(int i=1;i<=10;i++){
		cout<<no<<"*"<<i<<"="<<no*i<<endl;
	}
}
