#include<iostream>

using namespace std;

int main()
{
	float x = 2;
	float y , sum = 0;
	
	
	while(x<=69){
		y=1/x;
		sum = sum+y;
		x=x+1;
		
	}
	
	cout << "sum = " << sum;
	
	return 0;
}
