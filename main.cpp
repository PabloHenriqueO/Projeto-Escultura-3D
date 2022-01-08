#include <iostream>
#include <fstream>
#include "Sculptor.h"
#include "voxel.h"
using namespace std;

int main(void){
    Sculptor minion(50,50,50);
    
    //corpo
    minion.setColor(1,1,0,1);
    minion.putEllipsoid(12, 12, 1, 5, 9, 2);

    //oculos esquerdo
    minion.setColor(0.4,0.4,0.4,1);
    minion.putBox(9, 11, 17, 18, 0, 3);
    minion.putBox(8, 9, 15, 17, 0, 3);
    minion.putBox(9, 11, 14, 15, 0, 3);
    minion.putBox(11, 12, 15, 17, 0, 3);
    
    //oculos direito
    minion.putBox(12, 14, 17, 18, 0, 3);
    minion.putBox(14, 15, 15, 17, 0, 3);
    minion.putBox(12, 14, 14, 15, 0, 3);

    minion.setColor(0,0,0,1);
    minion.putBox(15, 17, 15, 17, 0, 3);
    
    //Olhos
    minion.setColor(1,1,1,1);
    minion.putBox(9, 11, 15, 17, 0, 3);
    minion.putBox(12, 14, 15, 17, 0, 3);
    minion.setColor(0,0,0,1);
    minion.putBox(9, 10, 16, 17, 0, 3);
    minion.putBox(12, 13, 16, 17, 0, 3);

    //Boca
    minion.setColor(0,0,0,1);
    minion.putBox(13, 14, 12, 13, 0, 3);
    minion.putBox(10, 13, 11, 12, 0, 3);

    //Roupa
    minion.setColor(0,0,1,1);
    minion.putBox(8, 9, 10, 11, 0, 3);
    minion.putBox(16, 17, 10, 11, 0, 3);
    minion.putBox(9, 16, 9, 10, 0, 3);
    minion.putBox(10, 15, 8, 9, 0, 3);
    minion.putBox(10, 15, 7, 8, 0, 3);
    minion.putBox(9, 16, 6, 7, 0, 3);
    minion.putBox(9, 16, 5, 6, 0, 3);
    minion.putBox(9, 16, 4, 5, 0, 3);

    //Pés
    minion.setColor(0,0,0,1);
    minion.putBox(10, 12, 2, 4, 0, 3);
    minion.putBox(13, 15, 2, 4, 0, 3);
    minion.putBox(9, 10, 2, 3, 0, 3);
    minion.putBox(15, 16, 2, 3, 0, 3);

    //Mãoszinhas 
    minion.putBox(16, 18, 5, 7, 0, 3);
    minion.putBox(7, 9, 5, 7, 0, 3);
    minion.cutVoxel(17, 5, 2);
    minion.cutVoxel(17, 5, 1);
    minion.cutVoxel(17, 5, 0);

    minion.cutVoxel(7, 5, 2);
    minion.cutVoxel(7, 5, 1);
    minion.cutVoxel(7, 5, 0);    

    minion.writeOFF((char*)"Minion.off");
    
    return 0;
}