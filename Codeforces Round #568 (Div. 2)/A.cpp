#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
int e[4];
int main()
{
	cin>>a>>b>>c>>d;
	e[0]=a;
	e[1]=b;
	e[2]=c;
	sort(e,e+3);
	int ans = 0;
	if(e[1]+d>e[2])
		ans+=(e[1]+d-e[2]);
	if(e[1]-d<e[0])
		ans+=(e[0]-(e[1]-d));
	cout<<ans<<endl;
	return 0;
 } 
