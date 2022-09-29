#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the amount:";
	cin>>x;
	if(x<=150000 && x>0){
		cout<<"No tax";
	}
	else if(x>150000 && x<=300000)
	{   
	    y=x/10;
		cout<<"tax amount: "<<y;
	}
	else if(x>300000 && x<=500000)
	{   
	    y=x/5;
		cout<<"Tax amount: "<<y;
	}
	else if(x>500000)
	{
		y=3*x/10;
		cout<<"Tax amount: "<<y;
	}
	else if(x<0)
	{
		cout<<"Enter valid amount";
	}
	else{
		cout<<"Invalid input";
  }
}
