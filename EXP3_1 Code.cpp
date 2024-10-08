#include<iostream>
using namespace std;

int main()
{

  double length, breadth;
  double areaDouble;
  float areaFloat;
  int areaInt;

cout<<"length:";
cin>>length;
cout<<"breadth:";
cin>>breadth;

areaDouble = length*breadth;
areaFloat = areaDouble;
areaInt = areaDouble;

cout<<"Area (double) :"  <<areaDouble <<endl;
cout<<"Area (float) :"  <<areaFloat <<endl;
cout<<"Area (int) :" <<areaInt <<endl;

return 0;
}
