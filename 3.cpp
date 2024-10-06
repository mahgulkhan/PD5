#include <iostream>
#include <iomanip>
using namespace std;
float taxcalculator(char type, float price);
main()
{
    char type;
    float price;
    cout << "Enter vehicle type code(M,E,S,V,T):";
    cin >> type;
    cout << "Enter price of vehicle: $";
    cin >> price;
    float finalprice =taxcalculator(type,price);
    cout << "The Final price of vehicle of "<<type<<" after adding tax is $" <<fixed << setprecision(3)<<finalprice;
    return 0;
}
float taxcalculator(char type, float price)
{
    float tax=0.0;
    if (type=='M')
    {tax=6.0/100.0;}
    else if (type=='E')
    {tax=8.0/100.0;}
    else if (type=='S')
    {tax=10.0/100.0;}
    if (type=='V')
    {tax=12.0/100.0;}
    else if (type=='T')
    {tax=15.0/100.0;}
    float taxamount, finalamount;
    taxamount = price*tax;
    finalamount = price + taxamount;
    return finalamount;
}