#include<bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
int n;
struct node{
	int v;
	int id;
}a[200005];
int b[200005];
bool cmp(node x,node y)
{
	return x.v<y.v;
}
int main()
{
	cin>>n; 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].v;
		a[i].id = i;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<n;i++)
		b[i] = a[i+1].v-a[i].v;
	int cnt = b[1];
	int flag = 1;
	int ans=-1;
	int i;
	for(i=2;i<n;i++)
	{
		if(b[i]==cnt)
			continue;
		else
		{
			if((b[i]+b[i+1]==cnt||i==n-1)&&flag==1)
			{
				if(i==n-1)
					flag = n;
				else
					flag = i+1;	
				i++;		
				continue;
			}
			else
				break;
		}
	}
//	cout<<i<<" "<<flag<<endl;
	if(i>=n)
		ans = a[flag].id;

	cnt = b[n-1];
	flag = n;
	for(i=n-2;i>=1;i--)
	{
		if(b[i]==cnt)
			continue;
		else
		{
			if((b[i]+b[i-1]==cnt||i==1)&&flag==n)
			{
				if(i==1)
					flag = 1;
				else
					flag = i;	
				i--;		
				continue;
			}
			else
				break;
		}
	}
//	cout<<i<<" "<<flag<<endl;
	if(i<=0)
		ans = a[flag].id;
	cout<<ans<<endl;
	return 0;
 } 
