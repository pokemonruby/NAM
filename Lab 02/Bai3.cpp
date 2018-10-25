#include<iostream>
#include<conio.h>
using namespace std;
struct cal{
	float a;
	float b;
	char operate;
};
void nhap(cal &c){
	cout<<"Enter your math :";
	cin>>c.a>>c.operate>>c.b;
}
void calculate(cal c){
	char o=c.operate;
	float a=c.a;
	float b=c.b;
	switch(o){
		case '+' : {
			cout<<a+b<<endl;
			break;
		};
		case '-' : {
			cout<<a-b<<endl;
			break;
		}
		case '*' : {
			cout<<a*b<<endl;
			break;
		}
		case '/' : {
			if(b==0){
				cout<<"impossible to divine 1 number for zero"<<endl;
			}else{
				cout<<a/b<<endl;
			}
			break;
		}
	}
}
void loop(){
	cal c;
	while(true){
		nhap(c);
		calculate(c);
		cout<<"do you wanna continue ? (y/n)"<<endl;
		char a=getch();
		if(a=='n'){
			break;
		}
	}
}
int main(){
	loop();
}
