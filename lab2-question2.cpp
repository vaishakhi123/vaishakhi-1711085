#include <iostream>
using namespace std;

int main() {
	float cel=0.0,fr=0.0;
	cout<<"enter the temperature in celsius:\n";
	cin>>cel;
	fr=(1.8*cel)+32;
	cout<<"the equivalent temperture in farenheit is:"<<fr<<endl;
	
	return 0;
}
