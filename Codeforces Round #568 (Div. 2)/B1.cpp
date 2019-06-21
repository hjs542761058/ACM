#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
	string a,b;
	cin>>n;
	while(n--) {
		cin>>a>>b;
		int len1 = a.length();
		int len2 = b.length();
		if(len1>len2||a[0]!=b[0]||a[len1-1]!=b[len2-1]) {
			cout<<"NO"<<endl;
			continue;
		}
		bool flag = true;
		int tnt = -1;
		int i,j;
		for(i=0; i<len1; i++) {
			tnt++;
			int cnt = 1;
			while(i+1<len1&&a[i+1]==a[i])
				i++,cnt++;
			while(cnt)
			{
				if(b[tnt]!=a[i])
				{
					flag = false;
					break;
				}
				else
				{
					cnt--;
					if(cnt)
						tnt++;
				}
			}
			while(tnt+1<len2&&b[tnt+1]==b[tnt])
				tnt++;
		}
		if(flag&&tnt==len2-1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
	return 0;
}
