#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierState_TypeDefinitionIndex = 44842;

	enum class ChenLingSoldierState : ::System::Int32
	{
		Invalid = 0,
		Available = 1,
		UseAbility = 4,
		Dying = 2,
		Dead = 3,
	};
}
