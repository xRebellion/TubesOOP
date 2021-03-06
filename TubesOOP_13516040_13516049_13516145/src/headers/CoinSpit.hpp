#ifndef COINSPIT_HPP
#define COINSPIT_HPP
#include "List.hpp"
#include "Coin.hpp"
class CoinSpit //Interface untuk sesuatu yang mengeluarkan koin
{
public:
	virtual bool checkSpitCoin() = 0; //Mengecek apakah ikan boleh mengeluarkan koin atau belum
	virtual void spitCoin(List<Coin>& Lcoin, int value) = 0; // Membuat ikan mengeluarkan coin
	
};
#endif