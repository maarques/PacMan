#ifndef PACMAN_H
#define PACMAN_H

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define BOMBA 'b'

int acabou();
void move(char direcao);
int ehdirecao(char direcao);
void fantasmas();
int praondeofantasmavai(int xatual, int yatual,
    int* xdestino, int* ydestino);
void explodepilula2(int x, int y, int somax, int somay, int qtd);
void explodepilula();

#endif //PACMAN_H
