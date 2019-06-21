#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	string a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		int len1 = a.length();
		int len2 = b.length();
		if(len1>len2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		bool flag = true;
		int tnt = -1;
		for(int i=0;i<len1;i++)
		{
			int cnt = 1;
			while(i+cnt<len1&&a[i+cnt]==a[i])
				cnt++;
			int cnc = 0;
			while(tnt<len2)
			{
				tnt++;
//				cout<<"a "<<tnt<<" "<<i<<endl;
				if(b[tnt]==a[i])
					cnc++;
				if(cnc==cnt)
					break;
			}
//			cout<<cnc<<" "<<cnt<<endl;
			if(cnc!=cnt)
				flag = false;
			i+=(cnt-1);
			while(tnt+1<len2&&b[tnt+1]==b[tnt])
				tnt++;
		}
		if(flag&&tnt==len2-1&&a[0]==b[0])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
