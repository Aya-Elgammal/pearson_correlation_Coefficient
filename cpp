#include<bits/stdc++.h>
using namespace std;
int kk=100005;
int main()
{
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int k,flag=0,cnt=0,x=0;
  cin>>k;
  if(k==1)
  {
      cout<<"4\n";
      return 0;
  }
  else
  {
   vector<long long>v;
  for(int i=3;cnt<=k;++i)
  {
      if(kk%i==0)
      {
          flag=1;
      }
      else
      {
          cnt++;
          x=i;
          v.push_back(i*i);
      }
  }
   cout<<v[cnt-1];
  }
}
