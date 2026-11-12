#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int CustomerTrigger_TypeDefinitionIndex = 79844;

	enum class CustomerTrigger : ::System::Int32
	{
		Arrived = 0,
		OrderReady = 1,
		OrderCompleted = 2,
		ServiceCompleted = 3,
		Timeout = 4,
		ScriptedLeave = 5,
		Left = 6,
	};
}
