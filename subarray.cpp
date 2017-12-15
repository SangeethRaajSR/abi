#include <iostream>
using namespace std;

int main() {
	int i, j, m, n, u, s, x, v, p;
	char ch;
	cin>>n>>m;int a[n+1],  su[n+1], t[n+1] ={0};
	for(i=1;i<=n;i++){
		cin>>a[i];
		su[i] = a[i];
	}
	for(i=1;i<n;i++){
		cin>>u>>v;if(!t[v])
			t[v]=u;
		else t[u]=v;
	}
	for(i=1;i<=n;i++){
		s=i;
		while(s != 1){
			s = t[s];
			su[s] += a[i];
		}
	}
	for(i=0;i<m;i++){
		cin>>ch;
		if(ch == 'Q'){
			cin>>s;
			cout<<su[s]<<endl;
		}
		else{ 	
			cin>>s>>x;
			u=x-a[s];
			a[s] += u;
			su[s] += u;
			while(s != 1){
				s = t[s];
				su[s] += u;
			}
		}
	}
	return 0;
}
