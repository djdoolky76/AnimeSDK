#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int AnchorType_TypeDefinitionIndex = 44688;

	enum class AnchorType : ::System::Int32
	{
		Product = 0,
		Transport = 1,
		Plate = 2,
		IceCream = 3,
		Strawberry = 4,
		Blueberry = 5,
		Chocolate = 6,
		Tofu = 7,
		Taiyaki = 8,
		Effect = 9,
	};
}
