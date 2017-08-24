int main() {
	int a=0,b=0,s=0,sub=0,m=0;
	float d=0.0,mod=0.0;
	printf("enter any two numbers \n");
	scanf("%d%d",&a,&b);
	s=a+b;
	sub=a-b;
	m=a*b;
	d=a/b;
	mod=a%b;
            printf("sum =%d\n",s);
            printf("substraction=%d\n",sub);
            printf("multiplication=%d\n",m);
            printf("divison=%f\n",d);
            printf("modulus=%f\n",mod);
	
	
	return 0;
}
