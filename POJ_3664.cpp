#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#define SS struct S

SS
{
  int A;
  int B;
  int index;
};

SS cow[50005];
int Acmp(const void *a,const void *b)
{
    SS x = *((SS*)a);
    SS y=  *((SS*)b);

    return y.A-x.A;


}
int Bcmp(const void *a,const void *b)
{
    SS x = *((SS*)a);
    SS y=  *((SS*)b);

    return y.B-x.B;


}
using namespace std;

int main(void)
{
    int N,K;
    int i;
    while(~scanf("%d %d",&N,&K))
    {
        for(i=0;i<N;i++)
        {
            scanf("%d %d",&cow[i].A,&cow[i].B);
            cow[i].index = i+1;
        }
        qsort(cow,N,sizeof(cow[0]),Acmp);
        qsort(cow,K,sizeof(cow[0]),Bcmp);
        printf("%d\n",cow[0].index);
    }
	return 0;
}
