#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int side;
	float p,a;
	cout<<"enter side of a triangle\n";
	cin>>side;
	p=pow(3,0.5)/4;
	a=p*side*side;
	cout<<"the area is="<<a<<endl;

	return 0;
}
