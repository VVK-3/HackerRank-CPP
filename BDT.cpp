#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
   int a;
   long b;
   char c;
   float d;
   double e;
   std::cout<<std::fixed;
   cin>>a>>b>>c>>d>>e;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
   std::cout<<std::setprecision(3)<<d<<endl;
   std::cout<<std::setprecision(9)<<e;
    return 0;
}

