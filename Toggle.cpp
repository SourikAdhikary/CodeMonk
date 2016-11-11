#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S[100];
    scanf("%s",S);
    int l=strlen(S);
    for(int i=0;i<l;i++)
    {
    	if(S[i]>='A'&&S[i]<='Z')
    		S[i]=S[i]+32;
    	else if(S[i]>='a'&&S[i]<='z')
    		S[i]=S[i]-32;
    }
    for(int i=0;i<l;i++)
    {
    	cout<<S[i];
    }
}

