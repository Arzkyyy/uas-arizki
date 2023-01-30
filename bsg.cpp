#include <iostream>
using namespace std;

void kataSambutan(){
	string wcl[9] = {"\t Selamat"," datang"," didalam"," project"," program"," tugas"," mata"," kuliah"," saya...\n"};
	for(int b = 0; b <= 50; b++){
		cout << endl << endl;
		if(b >= 0) cout << wcl[0];
		if(b >= 5) cout << wcl[1];
		if(b >= 10) cout << wcl[2];
		if(b >= 15) cout << wcl[3];
		if(b >= 20) cout << wcl[4];
		if(b >= 25) cout << wcl[5];
		if(b >= 30) cout << wcl[6];
		if(b >= 35) cout << wcl[7];
		if(b >= 40) cout << wcl[8];
		system("cls");
	}
}

int konversiUang(int jumlah, string asal, string tujuan, string daftar[], int nilai[]){
    int dari, ke;
    for(int i = 0; i < 5; i++){
        if(daftar[i] == asal){
            dari = i;
        }
        if(daftar[i] == tujuan){
            ke = i;
        }
    }
    return jumlah * nilai[ke] / nilai[dari];
}

int main(){
    string daftar[] = {"usd", "idr", "eur", "jpy", "cny"};
    int nilai[] = {1, 14000, 120, 130, 78};
    int jumlah;
    string asal, tujuan;
    char ulang;
    
    kataSambutan();
	a:
	system("cls");
	cout << endl;
	cout << "\t===================================\n";
	cout << "\t  \"Program Konversi Mata Uang.\"\n";
	cout << "\t===================================\n";
	cout << endl;
	
    cout << " Konversi Mata Uang" << endl;
    cout << " Mata uang yang tersedia: ";
    for(int i = 0; i < 5; i++){
        cout << daftar[i] << " ";
    }
    cout << endl;

    cout << " Masukkan mata uang asal: ";
	cin >> asal;
    cout << " Masukkan mata uang tujuan: ";
	cin >> tujuan;
	cout << " Masukkan jumlah uang: ";
	cin >> jumlah;

    int hasil = konversiUang(jumlah, asal, tujuan, daftar, nilai);
    cout << jumlah << " " << asal << " = " << hasil << " " << tujuan << endl;
	
	cout << endl;
	cout << " Ulangi program? (y/t): ";
	cin >> ulang;
	if(ulang == 'y'){
		goto a;
	}else{
		system("cls");
		cout << endl;
		cout << "  Terimakasih banyak" << endl;
		cout << " Semoga harimu menyenangkan...";
	}
	
    return 0;
}
