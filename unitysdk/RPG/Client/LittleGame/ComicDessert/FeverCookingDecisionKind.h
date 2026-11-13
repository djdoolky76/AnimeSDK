#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int FeverCookingDecisionKind_TypeDefinitionIndex = 79962;

	enum class FeverCookingDecisionKind : ::System::Int32
	{
		Ready = 0,
		NoDemand = 1,
		InvalidRecipe = 2,
	};
}
