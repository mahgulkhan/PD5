#include <iostream>
#include <iomanip>
using namespace std;
float vol(float l, float w, float h, string unit);
main()
{
   float l,w,h;
   string unit;
   cout << "Enter lenght of pyramid:";
   cin >> l;
   cout << "Enter width of pyramid:";
   cin >> w;
   cout << "Enter height of pyramid:";
   cin >> h;
   cout << "Enter desired unit(mm,cm,m,km):";
   cin >> unit;
   vol(l,w,h,unit);
}
float vol(float l, float w, float h, string unit)
{
    float volume;
    volume=(l*w*h)/3;
    if (unit== "mm")
    {volume=volume/1000;
    cout << "Volume of Pyramid is:"<< fixed << setprecision(3)<<volume<<" "<<unit;}
    if(unit== "cm")
    {volume=volume/100;
    cout << "Volume of Pyramid is:"<< fixed << setprecision(3)<<volume<<" "<<unit;}
    if (unit== "m")
    {cout << "Volume of Pyramid is:"<< fixed << setprecision(6)<<volume<<" "<<unit;}
    if (unit== "km")
    {volume=volume*1000;
    cout << "Volume of Pyramid is:"<< fixed << setprecision(3)<<volume<<" "<<unit;}
    return volume;

}