#include<iostream>
using namespace std;
int main()
{
	int choice;
	double num1,num2,result;
	cout<<"Select operation "<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"Enter choice (1/2/3/4)";
	cin>>choice;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	
	switch(choice){
		case 1:
			result=num1+num2;
			cout<<"result:"<<result<<endl;
			break;
		case 2:
			result=num1-num2;
			cout<<"result:"<<result<<endl;
			break;
		case 3:
			result=num1*num2;
			cout<<"result:"<<result<<endl;
			break;
		case 4:
			result=num1/num2;
			cout<<"result:"<<result<<endl;
			break;
		default:
			cout<<"Invalid input:";
			break;
			
	}
	
	
}
