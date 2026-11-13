#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int IngredientType_TypeDefinitionIndex = 44746;

	enum class IngredientType : ::System::Int32
	{
		Base = 0,
		Filling = 1,
		Decoration = 2,
	};
}
