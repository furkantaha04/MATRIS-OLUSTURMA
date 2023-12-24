#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Matris boyutunu girin: ";
    cin >> n;
    int** A = new int* [n];
    int** B = new int* [n];            // MATRİS GİRİŞLERİNİ TUTAR
    int** C = new int* [n];

    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
        B[i] = new int[n];                     
        C[i] = new int[n];
    }

    cout << "A matrisinin elemanlarini girin :";
    for (int i = 0; i < n; i++) {
      
        for (int j = 0; j < n; j++) {                 //A MATRİSİ DEĞER GİRİŞİ 

            cin >> A[i][j];
        }
    }
    cout << endl;

    cout << "B matrisinin elemanlarini girin:";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {                         //B MATRİSİ DEĞER GİRİŞİ 
            cin >> B[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {                          // A VE B TOPLAMI BİR C MATRİSİ OLUUŞTU
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << endl;

    int toplam = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {         // C MATRİSİ İFADE EDİLİŞİ
            toplam += C[i][j];
        }
    }

    float ortalama = float(toplam) / (n * n);
    cout << "C matrisinin aritmetik ortalamasi: " << ortalama << endl;        // ARİTMETİK ORTALAMA HESAPLAMA


	return 0; 
}