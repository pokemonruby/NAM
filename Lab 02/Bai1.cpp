#include<iostream>
#include<string.h>
using namespace std;
struct phone{
	char area[10];
	char exchange[10];
	char number[10];
};
phone Phone(const char area[], const char exchange[], const char number[]){
	phone p;
	strcpy(p.area,area);
	strcpy(p.exchange,exchange);
	strcpy(p.number,number);
	return p;
}
void nhap(phone &p){
	cout<<"Enter your area code, exchange , number :";
	cin>>p.area>>p.exchange>>p.number;
}
void xuat(const string str,phone p){
	cout<< str+" phone : ("<<p.area<<") "<<p.exchange<<" "<<p.number<<endl;
}
int main(){
	phone p;
	xuat("My",Phone("0908","0909","239"));
	nhap(p);
	xuat("Your",p);
}
