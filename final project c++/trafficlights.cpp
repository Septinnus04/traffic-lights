#include<cstdlib>
#include<iostream>
#include<time.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void wait ( double seconds )

{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}


void setcolor(unsigned short color) {
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hCon,color);
    }

    int main(int argc, char *argv[])
{
    loop:
    
    for(int i=5;i>=0;i--){
    system("cls");
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(14);
    cout<<"KUNING (HATI HATI)"<<endl; //menamppilkan kalimat dengan warna standar
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(14); //Mengeset warna text menjadi warna hijau
    cout<<"lampu akan mera saat lagi"<<endl;
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(14);
	cout<<"\t"<<i;wait(1);
    }
    for(int i=10;i>=0;i--){
    system("cls");
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(12);
    cout<<"MERAH (STOP)"<<endl;
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(12); //Mengeset warna text menjadi warna hijau
    cout<<"lampu akan hijau saat lagi"<<endl;
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(12); //Mengeset warna text menjadi warna Merah
    cout<<"\t"<<i;wait(2);
    }
    for(int i=10;i>=0;i--){
    system("cls");
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(10);
    cout<<"HIJAU (JALAN)"<<endl;
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(10); 
    cout<<"lampu akan kuning saat lagi"<<endl;
    setcolor(15);
    cout<<"==========================================="<<endl;
    setcolor(10);
    cout<<"\t"<<i;wait(2);
	}
	cout << "Finish" << endl;        

    goto loop;
    system("PAUSE");
    getch();
    return EXIT_SUCCESS;
    }