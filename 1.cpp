#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
  char name [20]; /* name [];!?*/
  int number;
  cout<<"Enter a string:";
  cin >> name ;
  //bug: cant understand ' '
  cout<<"Enter an integer:";
  cin >> number ;
 cout<<"\n"<<name <<number<<"\n";
  return 0;
}
