#include <iostream>
using namespace std;

int main() {
	int r=0,d=0;
	float p=0.0,a=0.0;
	printf("enter the radius of circle\n");
	scanf("%d",&r);
	d=2*r;
	p=2*3.14*r;
	a=3.14*r*r;
	printf("diameter=%d\n",d);
	printf("perimeter=%f\n",p);
	printf("area=%d\n",a);
	
	
	return 0;
}
