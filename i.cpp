     #include <iostream>
#include <string.h>
using namespace std;
int main()
{
 long double x=0,sum=0;
 std::cin>>x;
 std::cin>>sum;
string xs=to_string(x*sum);
string xw="";
for(int i=0;i<xs.length();i++)
{
  if(xs[i]!='.'){
  xw+=xs[i];
  }
  else
  {
    break;
  }
}
std::cout<<xw;
return 0;
} 