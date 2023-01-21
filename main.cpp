#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;
void login();
void exit();
class daftar
{
    public:
    void menu()
    {
        string buku[100];
        int harga[100],b,d,f,h;
        int total[200];
        int total1,bayar;
        int pilih1,kode;
        int jubuk[100];
        int tobuk[100];
        int habuk[150];
        int kmblian;
        char yt,yp,ch,jb,th,tmp;
        int pilihan1;
            sleep(1);
            do
            {
                system ("cls");
                cout <<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\t\n";
                cout <<"\t               ---Silahkan Pilih Buku Dibawah!--- \n";
                cout <<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\t\n\n";
                cout <<"==========================================================================\t\n";
                cout <<"NO\t\t              GENRE BUKU  \t\n";
                cout <<"==========================================================================\t\n";  
                int pilihan[5][1]={{1},{2},{3},{4}};
                for (int a=0;a<4;a++)
                {
                    for (int b=0;b<1;b++)
                    {
                        cout <<pilihan[a][b]<<"\t\t";
                        if (a==0&&b==0)
                        {
                            cout <<"\t\tPemrograman";
                        }
                        else if (a==1&&b==0)
                        {
                            cout <<"\t\tKomik";
                        }
                        else if (a==2&&b==0)
                        {
                            cout <<"\t\tDesign";
                        }
                        else if (a==3&&b==0)
                        {
                            cout <<"\t\tCerita";
                        }
                    }
                    cout<<endl;
                }
                
                    cout<<"Masukan jumlah jenis belanjaan anda: ";
                    cin>>pilihan1;
                    for (int a=0;a<pilihan1;a++)
                    {   
                        cout<<"\nbarang ke "<<a+1<<endl;
                        cout<<"masukkan kode barang: ";
                        cin>>pilih1;
                        if(pilih1==1)
                        {
                            cout<<"1. Python\n";
                            cout<<"2. JavaScript\n";
                            cout<<"3. HTML/CSS\n";
                            cout<<"Masukkan kode judul buku: ";
                            cin>>kode;
                            if(kode==1)
                            {
                                buku[a]="Python\t";
                                harga[a]=50000;
                            }
                            if(kode==2)
                            {
                                buku[a]="JavaScript";
                                harga[a]=60000;
                            }
                            if(kode==3)
                            {
                                buku[a]="HTML/CSS";
                                harga[a]=70000;
                            }
                        }
                        if(pilih1==2)
                        {
                            cout<<"1. Naruto\n";
                            cout<<"2. Boruto\n";
                            cout<<"3. Doraemon\n";
                            cout<<"Masukkan kode Judul buku: ";
                            cin>>kode;
                            if(kode==1)
                            {
                                buku[a]="Naruto\t";
                                harga[a]=5000;
                            }
                            if(kode==2)
                            {
                                buku[a]="Boruto\t";
                                harga[a]=7000;
                            }
                            if(kode==3)
                            {
                                buku[a]="Doraemon";
                                harga[a]=10000;
                            }
                        }
                        if(pilih1==3)
                        {
                            cout<<"1. CorelDraw\n";
                            cout<<"2. Photoshop\n";
                            cout<<"3. Figma\n";
                            cout<<"Masukkan kode judul buku: ";
                            cin>>kode;
                            if(kode==1)
                            {
                                buku[a]="CoralDraw";
                                harga[a]=20000;
                            }
                            if(kode==2)
                            {
                                buku[a]="Photoshop";
                                harga[a]=30000;
                            }
                            if(kode==3)
                            {
                                buku[a]="Figma\t";
                                harga[a]=40000;
                            }
                        }
                        if(pilih1==4)
                        {
                            cout<<"1. Malin Kundang\n";
                            cout<<"2. Sikancil\n";
                            cout<<"3. Bawang Merah\n";
                            cout<<"Masukkan kode judul buku: ";
                            cin>>kode;
                            if(kode==1)
                            {
                                buku[a]="Malin Kundang";
                                harga[a]=8000;
                            }
                            if(kode==2)
                            {
                                buku[a]="Sikancil";
                                harga[a]=9000;
                            }
                            if(kode==3)
                            {
                                buku[a]="Bawang Merah";
                                harga[a]=6000;
                            }
                        }
                        cout<<"jumlah buku: ";
                        cin>>tobuk[a];
                        total[a]=harga[a]*tobuk[a];
                        total1+=total[a];
                    }
                    
                        cout<<"-----------------------------------Bilmedia--------------------------------\n";
                        cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
                        cout<<"JUMLAH BUKU\t\tJUDUL BUKU\t\tHARGA\t\tTOTAL  \n";
                        cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
                        for(int i=0;i<pilihan1;i++)
                        {
                            cout<<tobuk[i]<<"\t\t\t"<<buku[i]<<"\t\t"<<harga[i]<<"\t\t"<<total[i]<<endl;
                        }
                    cout<<"===========================================================================\n";
                    cout<<"total yang harus dibayar: "<<total1<<endl;
                    cout<<"bayar: \t\t";
                    cin>>bayar;
                    cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
                    kmblian=bayar-total1;
                    cout <<"kembalian: "<<kmblian<<"\n";
                    cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
                    cout<<"apakah anda ingin berbelanja lagi: (y/t/e)";cin>>yt;"\n";
                    if(yt=='y')
                    {
                        cout<<"\n\nSelamat Datang Kembali!!! \n";
                    }
                    else if (yt=='t')
                    {
                        login();
                    }
                    else if (yt=='e')
                    {
                        exit();
                    }

            } while (yt=='y');
            
    }        
};
int main()
{
    login();
    exit();
};

void login()
{
    system("cls");
    string username = "  ";        
    string password = "   ";
    cout <<"\n\n\n";
    cout <<"==========================================================================\t\n";
    cout <<"\t              ---Login Untuk Berbelanja--\n";
    cout <<"\t              Username: ";cin>>username;
    cout <<"\t              Pass    : ";cin>>password;
    cout <<"\n=========================================================================\n\n";

    if (username =="nabiel"&& password =="qwerty")
    {

        cout <<"\t                  --Anda berhasil login!!!--\n";
        daftar awal;
        awal.menu();

    }
    else 
    {
        cout <<"Username atau Pin yang anda masukan salah: \n";
        login();
    }
    
    cout <<endl;
}
void exit()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout<<"\n\nWaktu: "<<dt<<"\n";
    cout<<"====================== Terimakasih, Mampir Lagi :) ========================\n";
    exit(0);
}