#include <QCoreApplication>
#include <iostream>


using namespace std;

void show(int S, char A)
{
    for (int i=1; i<=S; i++)
    {
        cout<<A;
    };
};

int main(int argc, char *argv[])
{
    int N;
    int step[7];
    char num [7] {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    N=45; cout<<"N="<<N<<endl;
    cout<<"R=";


    step[0] = N/1000;
    step[1] = (N-step[0])/500;
    step[2] = (N-step[0]*1000-step[1]*500)/100;
    step[3] = (N-step[0]*1000-step[1]*500-step[2]*100)/50;
    step[4] = (N-step[0]*1000-step[1]*500-step[2]*100-step[3]*50)/10;
    step[5] = (N-step[0]*1000-step[1]*500-step[2]*100-step[3]*50-step[4]*10)/5;
    step[6] = (N-step[0]*1000-step[1]*500-step[2]*100-step[3]*50-step[4]*10-step[5]*5)/1;

    for (int i=0; i<7; i++)
    {
        show(step[i],num[i]);
    };
    if (N==0) cout << "nulla";

    return 0;
}
