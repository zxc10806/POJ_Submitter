#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#define LL long long int
#define SS struct S
SS
{
  int T;
  int D;
};

SS f[100005];
using namespace std;
int cmp(const void *a,const void *b)
{
    SS x = *((SS*)a);
    SS y = *((SS*)b);

    return y.D*2*x.T -x.D*2*y.T;
}
int main(void)
{
	int N;
	int i;
	LL ans;
	LL tt;
	while(~scanf("%d",&N))
    {
        for(i=0;i<N;i++)
            scanf("%d %d",&f[i].T,&f[i].D);
        qsort(f,N,sizeof(f[0]),cmp);
        tt = 0;
        ans = 0;
        for(i=0;i<N;i++)
        {
            ans+=(LL)f[i].D*tt;
            tt+=(LL)(2*f[i].T);
        }
        printf("%lld\n",ans);
    }
	return 0;
}
