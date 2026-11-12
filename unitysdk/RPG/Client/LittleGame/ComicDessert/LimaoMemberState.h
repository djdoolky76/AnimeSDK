#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int LimaoMemberState_TypeDefinitionIndex = 79919;

	enum class LimaoMemberState : ::System::Int32
	{
		Waiting = 0,
		OrderCompleted = 1,
		ServiceCompleted = 2,
		Timeout = 3,
	};
}
