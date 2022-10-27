#include <stdio.h>

//EXERCÍCIO 1

/*
int main(void) {

  unsigned int x = 0x87654321;

  unsigned int a, b;



  // Manter o byte menos significativo de x e os outros bits em '0'

  a = x & 0x000000FF;



  // O byte mais significativo com todos os bits em '1' e manter os outros bytes com o mesmo valor dos bytes de x

  b = 0xFF000000 | x;



  printf("a = 0x%08X\n", a);

  printf("b = 0x%08X\n", b);



  return 0;

}*/

//EXERCÍCIO 2

/*

int odd_ones(unsigned int x) {

  int count = 0;
  int i;

  for(i = 0; i < 32; i++){
    if(x & 0x00000001 == 1){
     count ++;
    }
    x = x >> 1;
  }

  if((0x00000001 & count)  == 0){
    printf("TESTE %d TESTE\n", (0x00000001 & count));
    return 0;
  }
  else{
    printf("TESTE %d TESTE\n", (0x00000001 & count));
    return 1;
  }
}



int main() {

  unsigned int v;



  v = 0x01010101;

  printf("%X tem número %s de bits\n", v, odd_ones(v) ? "impar" : "par");



  v = 0x01030101;

  printf("%X tem número %s de bits\n", v, odd_ones(v) ? "impar" : "par");



  return 0;

}
*/

//EXERCÍCIO 3

#include <stdio.h>



unsigned int convertB2L(unsigned int x) {

  int i;
  unsigned int invertido = 0x00000000;

  for(i = 0; i< 4; i++){
    invertido = invertido | (x & 0x000000FF);
    if(i < 3){
        invertido = invertido << 8;
    }
    x = x >> 8;
    printf("TESTE 0x%08X\n TESTE \n",invertido);
  }
  return invertido;
}


int main() {

  unsigned int b = 0x12AB34CD;

  unsigned int l = convertB2L(b);



  printf("b = 0x%08X\n", b);

  printf("l = 0x%08X\n", l);



  return 0;

}

