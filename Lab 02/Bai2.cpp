#include<iostream>
using namespace std;
struct money{
	float amount;
	int year;
	float rate;
};
void cal(money m){
	float s=m.amount;
	float r=m.rate;
	for(int i=1;i<=m.year;i++){
		s=s+s*(r/(float)100);
	}
	cout<<"After "<<m.year<<" you have "<<s<<" dollars"<<endl;
}
void nhap(money &m){
	cout<<"Enter intial amount :";
	cin>>m.amount;
	cout<<"Enter number of rate :";
	cin>>m.year;
	cout<<"Enter interrest rate :";
	cin>>m.rate;
}
int main(){
	money m;
	nhap(m);
	cal(m);
}
