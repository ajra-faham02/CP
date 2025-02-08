#include <iostream>
using namespace std;
int main(){
	int mrp , no_of_item;
	cout<<"price of flowers : ";
	cin>>mrp;
	cout<<"no. of bouqet : "<<endl;
 	cin>>no_of_item;
 	int total = mrp * no_of_item;
 	cout<<"amount to be paid"<<total;
 	return 0;
}