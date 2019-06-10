#include<cstdlib>
#include<iostream>
#include<time.h>

using namespace std;

void wait ( double seconds )//fungsi timing
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}

int main(int argc, char *argv[])
{
   
    for(int i=20;i>=0;i--){
            system("cls");
            cout<<"==========================================="<<endl;
            cout<<" KUNING (HATI-HATI) "<<endl;
            cout<<"==========================================="<<endl;
            cout<<"Lampu akan merah bebarapa saat lagi :"<<endl;
            cout<<"********************************************"<<endl;
            cout<<"\t"<<i;wait(1);
            }
    for(int i=60;i>=0;i--){
            system("cls");
            cout<<"==========================================="<<endl;
            cout<<" MERAH (BERHENTI) "<<endl;
            cout<<"==========================================="<<endl;
            cout<<" Lampu akan hijau beberapa saat lagi :"<<endl;
            cout<<"********************************************"<<endl;
            
            cout<<"\t"<<i;wait(2);
            }
    for(int i=40;i>=0;i--){
    system("cls");
    cout<<"==========================================="<<endl;
    cout<<" HIJAU (JALAN)"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Lampu akan kuning bebarapa saat lagi kurangi kecepatan :"<<endl;
    cout<<"\t"<<i;wait(2);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}