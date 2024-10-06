#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string projectimecal(int h, int d, int w);
main()
{
    int h,d,w;
    string output;
    cout << "Enter the needed hours: ";
    cin >> h;
    cout << "Enter the numbers of days firm has: ";
    cin >> d;
    cout << "Enter number of all workers: ";
    cin >>w;
    output = projectimecal(h,d,w);
    cout << output;
}
string projectimecal(int h, int d, int w)
{
    float time, ptime, whours;
    string output;
    time = d*10;
    whours=time-(time*0.1);
    ptime= whours*w;
    to_string(ptime);
    if (h>ptime)
    {cout << "Not enough time! " <<h-ptime<< " hours needed,";}
    if (h<ptime)
    {cout << "Yes! "<<ptime-h<< " hours left";}
    return output;

}