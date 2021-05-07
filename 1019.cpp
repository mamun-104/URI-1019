#include<iostream>
using namespace std;

int main()
{
    int N,hour=0,minute=0,second=0;
    cin>>N;

        if (N>=3600)
        {

            hour = N/3600;
            N = N - (3600*hour);
        }
        if(N>=0)
        {

            minute = N/60;
            N = N - (60*minute);
        }

        second = N;

    cout << hour<<":"<< minute<<":"<<second<<endl;


    return 0;
}
