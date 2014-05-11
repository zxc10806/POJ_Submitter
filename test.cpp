#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
char filename[1005];
char cmd[1005];
int findNum(char str[1005])
{
	int l = strlen(str);
	int i;
	int tmp = 0;
	for(i=0;i<l;i++)
		if(isdigit(str[i]))
		{
			tmp*=10;
			tmp+=str[i]-'0';
		}
	return tmp;
}
int main(void)
{
	FILE *fp = fopen("problem.txt","r");
	while(fscanf(fp,"%s",filename)!=EOF)
	{
		int x = findNum(filename);
			
		sprintf(cmd,"judgesubmit poj %d %s -u zxc10806 -p a123456 -l cpp",x,filename);
		system(cmd);
		
	}
	fclose(fp);
	return 0;
}
