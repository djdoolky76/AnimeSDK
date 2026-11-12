#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IngredientKind_TypeDefinitionIndex = 11214;

	enum class IngredientKind : ::System::Int32
	{
		None = 0,
		Plate = 1,
		IceCream = 2,
		Strawberry = 3,
		Blueberry = 4,
		Chocolate = 5,
		Tofu = 6,
		Taiyaki = 7,
	};
}
