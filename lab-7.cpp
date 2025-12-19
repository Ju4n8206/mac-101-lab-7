#include <iostream>
using namespace std;

int main (){
    string gname;
    double gtemperature, celcius, fahrenhide;
    cout<< "which are you triying to change (celcius/fahrenheit):"<<endl;
    cin>>gname;

    if (gname == "celcius"){
        
        cout<<"enter the temperature value in celcius:"<<endl;
        cin>>gtemperature;
        fahrenhide=(gtemperature*9.0/5.0)+32.0;
        cout<<"the temperature in fahrenhide is: "<<fahrenhide<<"F"<<endl;
    }else if (gname == "fahrenhide"){
        cout<<"enter the temperature value in fahrenhide:"<<endl;
        cin>>gtemperature;
        celcius=(gtemperature-32.0)*5.0/9.0;
        cout<<"the temperature in celcius is: "<<celcius<<"c"<<endl;
    }
return 0;
}
