#include<iostream>
using namespace std;
int main()
{
	int ar[6]={1,3,4,5,7,6}	;
	int x;
	
	cout<<"search number";
	cin>>x;
	for(int i=0;i<6;i++)
	{
		if(ar[i]==x)
		{
			cout<<"number found at index"<<i<<endl;
			return 0;
			
		}
		
	}
	
	cout<<"number not found"<<endl;
	return 0;
	
}
