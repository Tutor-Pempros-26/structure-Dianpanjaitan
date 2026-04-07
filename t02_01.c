
// 12S25057 - Dian Petrus Panjaitan

#include <stdio.h>


struct TransaksiBuku {
    int jumlah_buku;
    float harga_buku;
    float total_awal;
    float potongan;
    float total_bayar;
};

int main(int _argv, char **_argc) {
    
    struct TransaksiBuku t;

    scanf("%d", &t.jumlah_buku);
    scanf("%f", &t.harga_buku);

    
    t.total_awal = t.jumlah_buku * t.harga_buku;

    if (t.total_awal > 500000.0) {
        t.potongan = t.total_awal * 0.15;
    } else if (t.total_awal >= 100000.0) {
        t.potongan = t.total_awal * 0.10;
    } else if (t.total_awal > 50000.0) {
        t.potongan = t.total_awal * 0.05;
    } else {
        t.potongan = 0.0;
    }

    t.total_bayar = t.total_awal - t.potongan;

    
    printf("%.2f\n", t.potongan);
    printf("%.2f\n", t.total_bayar);

    return 0;
}