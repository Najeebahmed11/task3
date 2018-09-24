#include<iostream>
using namespace std;
float saving_amount(float years,float new_amount,float interest_rate);
int main()
{
  float years,new_amount;
    float interest_rate;
    interest_rate=.07;
    float money;
    cout<<"enter your amount for saving amount";
    cin>>money;
    cout<<"for how many years you have to deposit your amount";
    cin>>years;
  saving_amount(years,new_amount,interest_rate);

}
float saving_amount(float years,float new_amount,float interest_rate)
{
   float money;
   float intr=0; 
    for(int i=1;i<=years;i++)
    {
       float interest=interest_rate*money;
       intr=intr+interest;
       money=money+interest;
       cout<<"enter the new amount";
       cin>>new_amount;
       money=new_amount+money;
    }
cout<<intr;
return intr;



}
