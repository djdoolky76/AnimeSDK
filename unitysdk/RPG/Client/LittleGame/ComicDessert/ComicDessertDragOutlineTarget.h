#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDragOutlineTarget_TypeDefinitionIndex = 79884;

	enum class ComicDessertDragOutlineTarget : ::System::Int32
	{
		None = 0,
		Customer = 1,
		DeliveryArea = 2,
		PrepOccupant = 3,
		CatCake = 4,
	};
}
