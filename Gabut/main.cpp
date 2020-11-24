#include <iostream>

using namespace std;

int main()
{

    int menu,totalHarga,diskon,jmlhHarga;
    int UngPembyaran,Kembalian,hasil;
    char jawab;

    do
    {
        cout<<"----------------------------------";
        cout<<" "<<endl;
        cout<<"PT SBR"<<endl;
        cout<<"Samarinda"<<endl;
        cout<<"----------------------------------";
        cout<<" "<<endl<<endl;

        cout<<"MENU TRANSAKSI BARANG. \n\n";
        cout<<"1.Member \n";
        cout<<"2.Bukan Member \n";
        cout<<"Silahkan Pilih Menu 1-2 ! : ";
        cin>>menu;
        cout<<"----------------------------------\n";
        cout<<"\n\n";


        if (menu==1)
        {
            cout<<"Selamt Anda Mendapatkan Tambahan diskon 5%\n";
            cout<<"Masukkan Total Harga : Rp.";
            cin>>totalHarga;
            if (totalHarga>100000 && totalHarga<=200000)
            {
                jmlhHarga=totalHarga-totalHarga*15/100;
                cout<<"Anda Mendapatkan Total diskon 15% dari tambahan diskon 5%\n";
                cout<<"----------------------------------\n";
                cout<<"\n";
                cout<<"Jumlah Pembayaran : Rp."<<jmlhHarga;
            }
            else if(totalHarga>200000 && totalHarga<=300000)
            {
                jmlhHarga=totalHarga-totalHarga*20/100;
                cout<<"Anda Mendapatkan Total diskon 20% dari tambahan diskon 5%\n";
                cout<<"----------------------------------\n";
                cout<<"\n";
                cout<<"Jumlah Pembayaran : Rp."<<jmlhHarga;
            }
            else if(totalHarga>300000)
            {
                jmlhHarga=totalHarga-totalHarga*25/100;
                cout<<"Anda Mendapatkan Total diskon 25% dari tambahan diskon 5%\n";
                cout<<"----------------------------------\n";
                cout<<"\n";
                cout<<"Jumlah Pembayaran : Rp."<<jmlhHarga;
            }
            else if(totalHarga<=100000)
            {
                cout<<"\n";
                cout<<"----------------------------------\n";
                cout<<"| Maaf Anda tidak mendapatkan Diskon|\n";
                cout<<"| Dikarenakan Total Belanja Tidak Lebih dari Rp.100000|\n";
                cout<<"----------------------------------\n"<<endl;
                cout<<"Totalh Harga : Rp."<<totalHarga;jmlhHarga=totalHarga;
            }
        }
        else if(menu==2)
        {
           cout<<"Masukkan Total Harga : Rp.";
           cin>>totalHarga;
           if(totalHarga>100000 && totalHarga<=200000)
           {
               jmlhHarga=totalHarga-totalHarga*10/100;
               cout<<"Anda Mendapatkan diskon 10%\n";
               cout<<"----------------------------------\n";
               cout<<"\n";
               cout<<"Jumlah Pembayaran : Rp."<<jmlhHarga;
           }
           else if(totalHarga>200000 && totalHarga<=300000)
            {
                jmlhHarga=totalHarga-totalHarga*15/100;
                cout<<"Anda Mendapatkan Total diskon 15%\n";
                cout<<"----------------------------------\n";
                cout<<"\n";
                cout<<"Jumlah Pembayaran : Rp."<<jmlhHarga;
            }
            else if(totalHarga>300000)
            {
                jmlhHarga=totalHarga-totalHarga*20/100;
                cout<<"Anda Mendapatkan Total diskon 20%\n";
                cout<<"----------------------------------\n";
                cout<<"\n";
                cout<<"Jumlah Pembayaran : Rp."<<jmlhHarga;
            }
            else if(totalHarga<=100000)
            {
                jmlhHarga=totalHarga;
            }
        }
        else if(menu!=1 && menu!=2)
        {
            cout<<"Maaf Harusnya memilih angka 1 & 2";
        }

        cout<<"\n";
        cout<<"Uang Pembayaran : Rp.";
        cin>>UngPembyaran;Kembalian=UngPembyaran-jmlhHarga;
        cout<<"----------------------------------\n";
        cout<<"Uang Kembalian : Rp."<<Kembalian;
        cout<<"\n\n";

        if (UngPembyaran<jmlhHarga)
        {
            hasil=(Kembalian)*-1;
            cout<<"Pembayaran Anda Kurang : Rp."<<hasil;
        }

        cout<<"\n\n";
        cout<<"Apakah akan memilih menu transaksi lagi? (Y/T)";
        cin>>jawab;
}
    while(jawab=='y' || jawab=='Y');
    cout<<" . Terimakasih Atas Kunujungannya!  . \n\n"<<endl;

   return 0;
}
