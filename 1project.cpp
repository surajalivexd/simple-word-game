#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));

	int a;
	int random =rand()%99+1;
	for(int i = 1;i<1000000;i++)
	{
	cout<<"Enter the guess no"<<endl;
	cin>>a;
	 if(random==a){
cout<<"YOUUUU GOTTT ITTTT!!!"<<endl;
break;
}

else if(random-10<=a&&random+10>=a){
	cout<<"Hot!!"<<endl;
} 
else{
	cout<<"Cold"<<endl;
}
	}
	return 0;
}
