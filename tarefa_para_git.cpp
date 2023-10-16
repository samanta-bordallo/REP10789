#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
	float a, b, c, d;
	cout<<"Me de 4 notas"<<endl;
	cin>>a>>b>>c>>d;
	cout<<"As notas foram: "<<a<<", "<<b<<", "<<c<<", "<<d<<"."<<endl;
	cout<<"A media das notas e: "<<(a+b+c+d)/4;
}
