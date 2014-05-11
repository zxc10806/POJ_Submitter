#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
map<string,int>ex;
char dic[10005][25];
char tmp[25];
int main(void)
{
	ex.clear();
	int i,j,k;
	int dn = 0;
	while(true)
    {
        scanf("%s",tmp);
        if(tmp[0]=='#')
            break;
        strcpy(dic[dn],tmp);
        string x(tmp);
        ex[tmp] =1;
        dn++;
    }
    while(true)
    {
        scanf("%s",tmp);
        if(tmp[0]=='#')
            break;
        string y(tmp);
        if(ex[y]==1)
        {
            printf("%s is correct\n",tmp);
        }
        else
        {
            printf("%s:",tmp);
            int ff = 1;
            for(i=0;i<dn;i++)
            {
                int ok = 0;
                int tn = 0;
                if(strlen(tmp)==strlen(dic[i])+1)
                {


                for(j=0;j<strlen(tmp);j++)
                    {
                        if(tmp[j]==dic[i][tn])
                            tn++;
                    }
                if(tn==strlen(dic[i]))
                    ok = 1;
                }
                if(ok==0&&strlen(tmp)==strlen(dic[i]))
                {
                    int cn = 0;
                    for(j=0;j<strlen(tmp);j++)
                        if(tmp[j]!=dic[i][j])
                        cn++;
                    if(cn==1)
                        ok = 1;
                }
                if(ok==0&&strlen(tmp)+1==strlen(dic[i]))
                {
                    int ttn = 0;
                    for(j=0;j<strlen(dic[i]);j++)
                    {
                        if(tmp[ttn]==dic[i][j])
                            ttn++;
                    }
                    if(ttn==strlen(tmp))
                        ok = 1;
                }
                if(ok==1)
                {

                    printf(" %s",dic[i]);
                    ff = 0;
                }
            }
            printf("\n");
        }


    }
	return 0;
}
