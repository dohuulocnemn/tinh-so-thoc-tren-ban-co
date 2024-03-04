#include <iostream>
using namespace std;

// Hàm tính tổng số thóc trên bàn cờ
int tinhTongThoc(int** banCo, int hang, int cot) {
    int tong = 0;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            tong += banCo[i][j];
        }
    }
    return tong;
}

int main() {
    // Kích thước của bàn cờ
    int hang, cot;
    cout << "Nhap so hang cua ban co: ";
    cin >> hang;
    cout << "Nhap so cot cua ban co: ";
    cin >> cot;

    // Khởi tạo và nhập dữ liệu cho bàn cờ
    int** banCo = new int* [hang];
    for (int i = 0; i < hang; ++i) {
        banCo[i] = new int[cot];
        for (int j = 0; j < cot; ++j) {
            cout << "Nhap so thoc tai o [" << i << "][" << j << "]: ";
            cin >> banCo[i][j];
        }
    }

    // Tính tổng số thóc trên bàn cờ
    int tongThoc = tinhTongThoc(banCo, hang, cot);
    cout << "Tong so thoc tren ban co la: " << tongThoc << endl;

    // Giải phóng bộ nhớ
    for (int i = 0; i < hang; ++i) {
        delete[] banCo[i];
    }
    delete[] banCo;

    return 0;
}

