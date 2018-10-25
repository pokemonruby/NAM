#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct complex{
	int tu;
	int mau;
};
complex cong(complex c1, complex c2){
	complex c3;
	c3.tu=(c1.tu*c2.mau+c1.mau*c2.tu);
	c3.mau=c1.mau*c2.mau;
	return c3;
}
complex tru(complex c1, complex c2){
	complex c3;
	c3.tu=(c1.tu*c2.mau-c1.mau*c2.tu);
	c3.mau=c1.mau*c2.mau;
	return c3;
}
complex nhan(complex c1, complex c2){
	complex c3;
	c3.tu=c1.tu*c2.tu;
	c3.mau=c1.mau*c2.mau;
	return c3;
}
complex chia(complex c1, complex c2){
	int temp=c2.tu;
	c2.tu=c2.mau;
	c2.mau=temp;
	return nhan(c1,c2);
}
void nhap(complex &c){
	cout<<"nhap tu :";
	cin>>c.tu;
	while(true){
		cout<<"nhap mau :";
		cin>>c.mau;
		if(c.mau==0){
			cout<<"mau khong the bang 0"<<endl;
		}else{
			break;
		}
	}
}
void xuat(complex c){
	cout<<c.tu<<"/"<<c.mau<<endl;
}
void tinh(){
	complex c1;
	complex c2;
	char o;
	while(true){
		nhap(c1);
		cout<<"Operator:";
		cin>>o;
		nhap(c2);
		switch(o){
			case '+' : {
				xuat(cong(c1,c2));
				break;
			};
			case '-' : {
					xuat(tru(c1,c2));
				break;
			}
			case '*' : {
					xuat(nhan(c1,c2));
				break;
			}
			case '/' : {
				xuat(chia(c1,c2));
				break;
			}
		}
		cout<<"do you wanna continue?(y/n)"<<endl;
		char a;
		cin>>a;
		if(a=='n'){
			break;
		}
	}
}
int main(){
	tinh();
}
