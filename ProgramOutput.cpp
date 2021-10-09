ProgramOutput.cpp
#include <iostream>
using namespace std;

int main() 
{
int i,j;
for (i=1;i<=5;i++)
{
for (j=1;j<=5;j++)  
{
   if (j<=i) 
   cout <<j;
   else 
   cout <<"   ";
}
for (j=5;j<=9;j++)
{
   if (i>=10-j)
   cout <<10-j;
   else
    cout <<"   ";
}
cout <<endl ;
}
for (i=5;i>=1;i--)
{
   for (j=1;j<=5;j++) 
   {
      if (j<=i) 
      cout <<j;
      else 
      cout <<"   ";
   }
   for (j=5;j<=9;j++)
   {
      if (i>=10-j) 
      cout <<10-j;
      else 
      cout <<"   ";
   }
   cout <<endl ;
}
    return 0;
}