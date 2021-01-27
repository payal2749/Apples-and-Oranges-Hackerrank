#include <bits/stdc++.h>
using namespace std;

void func(int s,int t,int a,int b,vector<int> apples,vector <int> oranges)
{
   int count1=0;
   int count2=0;
   int suma,sumo;
   for(int i=0;i<apples.size();i++)
   {
      suma=a+apples[i];
      if(s<=suma && suma<=t)
          count1++;    
   }
   cout<<count1;
   for(int i=0;i<apples.size();i++)
   {
      sumo=b+oranges[i];
      if(s<=sumo && sumo<=t)
          count2++;    
   }
   cout<<count2;
  
}



int main()
{
   int s=7,t=11,a=5,b=15;
   vector <int> apples{-2,2,1},oranges{5,-6};
   func(s,t,a,b,apples,oranges);
   

   return 0;
    
    
}
