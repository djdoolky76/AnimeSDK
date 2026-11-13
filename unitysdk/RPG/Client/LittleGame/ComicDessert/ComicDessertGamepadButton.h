#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertGamepadButton_TypeDefinitionIndex = 79817;

	enum class ComicDessertGamepadButton : ::System::Int32
	{
		Taiyaki = 0,
		ServingArea = 1,
		ServingSlot1 = 2,
		ServingSlot2 = 3,
		ServingSlot3 = 4,
		TofuBasket = 5,
		IceCreamBasket = 6,
		PrepareArea = 7,
		StrawberryBasket = 8,
		BlueBerryBasket = 9,
		IceMachine = 10,
		PlateBasket = 11,
		ChocolateBasket = 12,
	};
}
