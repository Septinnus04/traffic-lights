#include<cstdlib>// perintah ini berfungsi untuk operasi pembanding dan operaso konversi
#include<iostream>//perintah ini di gunakan untuk meletakan code dari header file iostream kedalam program
#include<time.h>//perintah ini digunakan untuk memanggil waktu pada sistem
#include <conio.h>//perintah ini digunakan untuk membuat teks antarmuka pengguna
#include <windows.h>//perintah ini digunakan untuk memanggil perintah perintah yang ada pada command prompt

using namespace std;//perintah ini digunakan untuk menyajikan perintah atau deklarasi kepada sebuah aplikasi compiler yang menyatakan bahwa kita akan menggunakan beerkas atau class
void wait ( double seconds )//fungsi timing

{
  clock_t endwait;//memanggil waktu dari sistem
  endwait = clock () + seconds * CLOCKS_PER_SEC ;//pengaturan jam/waktu perdetik
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
    system("cls");//penghapus layar
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
    system("cls");//penghapusan layar
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
