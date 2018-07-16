#include <iostream>
#include <iomanip>

using namespace std;

double Function(double x, double y){
	return (2*x)+(2*y);
}

void report(double x, double y, double f, int a){
	
	cout<<setw(10)<<a<<setw(15)<<x<<setw(15)<<y<< setw(15) << f <<endl;
}

int main(){
double x0, y0, h;
int N;
cout << "Ingrese el valor de x0: ";
cin >> x0;
cout << "Ingrese el valor de y0: ";
cin >> y0;
cout << "Ingrese el tamaño de paso: ";
cin >> h;

cout << "Cuantos pasos son requeridos? ";
cin >> N;
  cout<<endl;
  cout<<setw(10)<<"I"<<setw(15)<<"X"<<setw(15)<<"Y"<<endl;
  cout<<setw(10)<<"-"<<setw(15)<<"--"<<setw(15)<<"--"<<endl;
  report(x0,y0,Function(x0,y0),0);
for(int a = 0; a < N; a++){
	y0 = y0 + (h*Function(x0,y0));
	x0 += h;
	report(x0,y0,Function(x0,y0),a);
}

return 0;
}
