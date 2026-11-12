#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDropZoneKind_TypeDefinitionIndex = 44728;

	enum class ComicDessertDropZoneKind : ::System::Int32
	{
		Customer = 0,
		DeliveryArea = 1,
		Discard = 2,
		PrepArea = 3,
		CatCake = 4,
	};
}
