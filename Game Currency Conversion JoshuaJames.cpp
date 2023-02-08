#include<iostream>

using namespace std;
int main()
{
    int bolts;
    int goldcoins;
    int gems;
    int c_bolts;
    int remainder;

    cout << "Enter the number of Bolts: " << endl;
    cin >> bolts;
   
    gems = (int)bolts / 299;
    gems = (int)gems ;
    remainder = bolts % 299;
    goldcoins = (int)remainder / 23;
    remainder = (int)remainder % 23;
    bolts = (int)remainder;

    cout << gems << " Gem(s) " << goldcoins << " GoldCoin(s) " << bolts << " Bolt(s)" ;    

}
