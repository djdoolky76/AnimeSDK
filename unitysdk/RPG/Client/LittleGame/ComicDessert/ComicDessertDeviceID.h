#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDeviceID_TypeDefinitionIndex = 79809;

	enum class ComicDessertDeviceID : ::System::UInt32
	{
		None = 0,
		PrepArea = 1,
		ChocolateBasket = 2,
		Delivery = 3,
		TaiyakiGrill = 4,
		CatCake = 5,
		StrawberryBasket = 6,
		BlueberryBasket = 7,
		TofuBasket = 8,
		IceMachine = 9,
		IceCreamBasket = 10,
		PlateBasket = 11,
	};
}
