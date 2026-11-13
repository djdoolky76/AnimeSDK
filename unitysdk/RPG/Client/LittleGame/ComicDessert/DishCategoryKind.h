#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int DishCategoryKind_TypeDefinitionIndex = 80128;

	enum class DishCategoryKind : ::System::Int32
	{
		Single = 0,
		Batch = 1,
	};
}
