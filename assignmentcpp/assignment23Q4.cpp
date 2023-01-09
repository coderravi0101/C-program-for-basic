//WAP TO PRINT THE ADDITION OF TWO NUMBER
#include<iostream>
using namespace std;
class Addition
{
  public:
  int x;
  int y;
  int add()
  {
  return x+y;
  }
};


int main()
{
    Addition a;
    cout<<"enter two number"<<endl;
    cin>>a.x>>a.y;
   // a.x=5;
    //a.y=6;
    //b.x=20;
    //b.y=30;
   int z=a.add();
   //int p=b.add();
   cout<<"addition is"<<a.x<<"and"<<a.y<<"is"<<z<<endl;
  // cout<<"addition is"<<p<<endl;
   return 0;
}


