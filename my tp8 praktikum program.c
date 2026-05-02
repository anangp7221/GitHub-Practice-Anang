#include <stdio.h>
#include <string.h>

typedef enum {
    Fantasy,
    Romance,
    Comedy,
    SliceOfLife
} Genre;

typedef union {
    float nilai;
} Rating;

typedef struct {
    char judul[50];
    Genre genre;
    Rating rat;
} Buku;

int main() {
    Buku b1;
    int pilihanGenre;

    printf("--- Input Data Buku ---\n");
    printf("Masukkan Judul Buku: ");
    scanf(" %[^\n]s", b1.judul);

    printf("Pilih Genre (0:Fantasy, 1:Romance, 2:Comedy, 3:Slice of Life): ");
    scanf("%d", &pilihanGenre);
    b1.genre = (Genre)pilihanGenre;

    printf("Masukkan Rating (0-5): ");
    scanf("%f", &b1.rat.nilai);

    printf("\n--- Informasi Buku ---\n");
    printf("Judul  : %s\n", b1.judul);
    
    char* genreNames[] = {"Fantasy", "Romance", "Comedy", "Slice of Life"};
    printf("Genre  : %s\n", genreNames[b1.genre]);
    
    printf("Rating : %.1f/5.0\n", b1.rat.nilai);

    return 0;
}