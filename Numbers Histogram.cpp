#include <iostream>
using namespace std;

int main()
{
    // firstly we will take an char input 
    // following with char we will take two integer input as well
  char ch;
  int N,num;
  cin>>ch>>N;
   
  //we will run a loop from 2 to num 
  // hence print the char untill the loops conditions fails
  while (N>0)
  {
      cin>>num;
      for (int i=1; i<=num ; i++)
         cout<<ch;
         
   cout<<endl;
   N--; 
  }
    
    return 0;
}
