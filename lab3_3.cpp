#include<iostream>

using namespace std;

int main()
{
	float x = 6;
	float y , sum = 0;
	
	
	while(x <= 19){
		y=1/x;
		sum = sum+y;
		x=x+1;
	}
	
	cout << "sum = " << sum;
	
	return 0;
}
