#include<iostream>
using namespace std;

int MonthDay(int year,int month)
{
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        day[2]=29;
    }
    return day[month];
}

int main()
{
    int year=0,month=0,day=0;
    int n=0;//表示要加的数
    int m=0;//表示行
    cin>>m;
    while(m--)
    {
        cin>>year>>month>>day>>n;
        day+=n;
        n=0;
        while(day>MonthDay(year,month))
        {
            day-=MonthDay(year,month);
            month++;
            if(month==13)
            {
                year++;
                month=1;
            }
        }
    printf("%04d-%02d-%02d\n",year,month,day);
        
    }
   
    return 0;
}