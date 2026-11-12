#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int CustomerState_TypeDefinitionIndex = 44716;

	enum class CustomerState : ::System::Int32
	{
		Spawning = 0,
		Ordering = 1,
		Waiting = 2,
		OrderCompleted = 3,
		ServiceCompleted = 4,
		Timeout = 5,
		Leaving = 6,
		Gone = 7,
	};
}
