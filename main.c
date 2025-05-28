
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ===========================================================================================
// Inisialisasi barang-barang yang akan didonasikan
// ===========================================================================================

struct Namabarang { 
    char namaberas[50]; 
    char namasnack[50]; 
    char namasuple[50];
    char namahewan[50]; 
    char namasayur[50];
};

union BerasBahanbaku  { 
    float jumlahKgberas; 
    float jumlahBuahberas; 
};

union Makananringan  { 
    float jumlahKgsnack; 
    float jumlahBuahsnack; 
};

union SuplemenObat  { 
    float jumlahKgsuple; 
    float jumlahBuahsuple; 
};

union OlahanHewan  { 
    float jumlahKgdaging; 
};

union SayurdanBuah  { 
    float jumlahKgsayur; 
    float jumlahBuahsayur; 
};

enum bentukdonasi {
    Beras_dan_bahan_baku,
    Makanan_Ringan,
    Suplemen,
    Olahan_hewan,
    Sayur_dan_buah
};

// ===========================================================================================
// Inisialisasi aspek profil donatur
// ===========================================================================================

enum benua { 
    BenuaAmerika,
    BenuaAsia,
    BenuaAustralia,
    BenuaAfrika,
    BenuaEropa,
    BenuaOseania
};

struct KodeTeleponBenua {
    char nama[50];
    int kodetelepon; 
};

struct Donasi { 
    enum bentukdonasi barang;
    union BerasBahanbaku beras; 
    union Makananringan snack; 
    union SuplemenObat suple; 
    union OlahanHewan daging;
    union SayurdanBuah sayur;
    struct Namabarang ItemName;
};

struct Donatur {
    char nama[50];
    int umur;   
    enum benua Benuaasal;
    char negaraasal[50];
    char nomorkependudukan[20];
    int kodetelepon;
    struct Donasi Brgdonasi;
};

// ===========================================================================================
// Inisialisasi data negara-negara di Afrika
// ===========================================================================================

typedef struct {
    char nama[50];
    float populasi_juta;         
    float kelaparan_juta;        
    float persentase_kelaparan;  
} NegaraAfrika;