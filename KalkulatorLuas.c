#include <stdlib.h>
#include <stdio.h>

int main()
{
  int pil;
  int nil1, nil2;
  int hasil;

  printf("Menu: \n1. Persegi\n2. Persegi Panjang\n3. Segitiga\n");
  printf("Input Pilihan: ");
  scanf("%d", &pil);
  if (pil == 1)
  {
    printf("Masukkan panjang persegi: ");
    scanf("%d", &nil1);
    hasil = nil1 * 2;
    printf("Luas Persegi adalah: %d.\n", hasil);
  }
}
