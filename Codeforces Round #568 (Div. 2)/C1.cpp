#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
int main()
{
	cin>>n>>m;
	priority_queue <ll,vector<ll>,less<ll> >q;
	priority_queue <ll,vector<ll>,greater<ll>>q1;
	ll a;
	ll sum = 0;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		while(!q1.empty()&&!q.empty()&&q.top()>q1.top())
		{
			int tmp = q.top();
			sum-=tmp;
			q.pop();
			q1.push(tmp);
			tmp = q1.top();
			sum+=tmp;
			q1.pop();
			q.push(tmp);
		}
		while(sum+a>m)
		{
			ll tmp = q.top();
			sum-=tmp;
			q1.push(tmp);
			q.pop();
		}
		while(!q1.empty()&&q1.top()+sum<=m-a)
		{
			sum+=q1.top();
			q.push(q1.top());
			q1.pop();
		}
		q.push(a);
		sum+=a;
		cout<<q1.size()<<" ";
	}
	return 0;
}
