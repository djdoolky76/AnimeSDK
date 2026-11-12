#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertLinearMoveMode_TypeDefinitionIndex = 25031;

	enum class ComicDessertLinearMoveMode : ::System::Int32
	{
		ToSlot = 0,
		ToDoor = 1,
	};
}
