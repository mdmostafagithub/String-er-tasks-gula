#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char str1[]="mostafa kamal";
    char str2[30];

    int i=0,len=0,j;

    while(str1[i] !='\0')
    {
        i++;
        len++;
    }
    /*for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';*/

    cout<<"str1 = "<<str1<<endl;
    //cout<<"str2 = "<<str2;
}
