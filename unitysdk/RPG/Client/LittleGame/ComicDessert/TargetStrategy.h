#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int TargetStrategy_TypeDefinitionIndex = 79800;

	enum class TargetStrategy : ::System::Int32
	{
		None = 0,
		SingleSlot = 1,
		NextEmptyInOrder = 2,
		LeftmostEmpty = 3,
	};
}
