#include <iostream>
using namespace std;
int main(){
	string fname = "ajra " , lname = "faham";
	cout<<"full name is "<<fname.append(lname)<<endl;
	string x = "30";
	string y = "43";
	cout<<x+y<<endl;

	string txt = "rfamffgeruigertjaksfkjdfheiruthjfnmx";
	cout<<"size of string "<<txt.length()<<endl;
	cout<<txt[0]<<endl;
	cout<<txt[txt.length() - 1]<<endl;
	string str = "room";
	str[0] = 'd';
	cout<<str;
	str.at(0) = 'b';
	return 0;

}