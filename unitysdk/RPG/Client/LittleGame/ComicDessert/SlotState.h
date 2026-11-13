#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 44714;

	enum class SlotState : ::System::Int32
	{
		Free = 0,
		Reserved = 1,
		Occupied = 2,
	};
}
