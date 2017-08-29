#include <iostream>
using namespace std;

int main() {
	float cm=0.0,m=0.0,km=0.0;
	cout<<"enter length in centimeters:";
	cin>>cm;
	m=cm/100;
	km=m/1000;
	cout<<"the equivalent length in meter:"<<m<<endl;
	cout<<"the equivalent length in kilometer:"<<km<<endl;

	return 0;
}
