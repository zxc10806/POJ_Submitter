#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#define LL long long int
using namespace std;
int A[20005];
int main(void)
{
	int N,S;
	int i;
	LL ans;
	int l,r,mid;
	while(~scanf("%d %d",&N,&S))
    {
        ans = 0;
        for(i=0;i<N;i++)
            scanf("%d",&A[i]);
        sort(A,A+N);
        for(i=0;i<N;i++)
        {
            l = i+1;
            r = N-1;
            int ff = S-A[i];
            while(r>l)
            {
                mid = (l+r)/2;
                if(A[mid]<=ff)
                    l = mid+1;
                else
                    r = mid;
            }
            LL aa = -1;
            if(A[r]<=ff)
                aa = r;
            if(A[l-1]<=ff&&l-1>aa)
                aa = l-1;
            if(aa!=-1)
            ans+=aa-(LL)i;
        }
        printf("%lld\n",ans);
    }
	return 0;
}
