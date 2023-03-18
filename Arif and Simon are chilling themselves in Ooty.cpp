#include <iostream>
using namespace std;
int main()
{int t,n,h,i,l=1,count;
scanf("%d",&t);
while(t--)
{l=1;
count=0;
cin>>n;
for(i=1;i<=n;i++)
{
    scanf("%d",&h);
    if(h==l)
    {count+=2;
    }
    if(h>l)
    {l=h;
    count++;}}
    cout<<count<<"\n";
}

	return 0;
}
