#include <iostream> 
#include <iomanip>

using namespace std; 

int main (){ 

float pp; 
float US = 1.000; 
float USDollar;
double E = 0.734719;
float Euro;
double Yu = 6.346934;
float Yuan;
double kor = 18.77263;
float Koruna;
double kro = 5.449007;
float Krone;
double she = 3.726334;
float Sheqel;
double din = 0.274588;
float Dinar;


cout << "Enter Philippine Peso: ";   
cin >> pp; 

cout << "The amount's is equivalent to: " << endl; 

USDollar = pp * US;   

cout << setprecision(7);
cout << "US Dollar is: " << USDollar << endl; 

Euro = pp * E;  

cout << setprecision(7);
cout << "Euro: " << Euro << endl;

Yuan = pp * Yu;  

cout << setprecision(7);
cout << "Yuan: " << Yuan << endl;

Koruna = pp * kor;  

cout << setprecision(7);
cout << "Koruna: " << Koruna << endl;

Krone = pp * kro;  

cout << setprecision(7);
cout << "Krone: " << Krone << endl;

Sheqel = pp * she;  

cout << setprecision(7);
cout << "Sheqel: " << Sheqel << endl;
 
Dinar = pp * din;  

cout << setprecision(7);
cout << "Dinar: " << Dinar << endl;
 

 

return 0; 

} 
