//Author: Rashed Alnuaimi
#include<iostream>

using namespace std;

int main()
{

char letter;

  cout<<"What character do you want to know about?\n";

cin >> letter;
  //when user's entry is between A-Z...

  if ( letter >= 'A' && letter <= 'Z' ) {
  cout<<letter<< " is an upper case letter!\n";
} else if ( letter >= 'a' && letter <= 'z' ){
  
  //when user's entry is between a-z...
  cout<<letter<<" is a lower case letter!\n";
} else {
  //in all other cases...
  cout<<letter<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)letter<<"\n";

  return 0;
}
