#include "Guppy.hpp"
#include "List.hpp"
#include "Makanan.hpp"
#include "Coin.hpp"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>

using namespace std;
int main(){

    // Constructor Test
    double tick_rate = 0;
    const double sec = 0.01;
    Guppy G(50,50,100,100);
    List<Makanan> m;
    List<Coin> c;
    m.add(new Makanan(75,75,100,100));
    G.reduceHunger(10);
    cout <<"Is there makanan = "<<!m.isEmpty() << endl;
    while (tick_rate < 0.5)
    {
        tick_rate += sec;
        G.move(m,sec);
        cout << "Guppy Current Pos = " << G.getX() <<" " << G.getY() <<endl;
    }
    
    
    cout <<"Is there makanan = "<<!m.isEmpty() << endl;
    G.spitCoin(c,100);
    cout <<"Is there coin = "<<!c.isEmpty()<< endl;
    //expected output : there is no coin, because cointickrate is still 0
    

    // Operator Test
    
}

