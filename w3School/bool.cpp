#include <iostream>
using namespace std;
int main(){
int	x = 24 , y = 34;
cout<<(x>y)<<"\n";
cout<<(x<y)<<"\n";
cout<<(x == 24)<<"\n"<<(y == 32)<<endl;


int votingAge = 18;
int myAge;
cout<<"how old are you??"<<"\n";
cin>>myAge;
if(myAge >= votingAge){
	cout<<"can vote!";
}
else{
	cout<<"can not vote yet :((";
}



	return 0;
}