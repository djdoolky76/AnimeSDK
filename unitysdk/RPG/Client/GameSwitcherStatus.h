#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameSwitcherStatus_TypeDefinitionIndex = 74826;

	enum class GameSwitcherStatus : ::System::Int32
	{
		Internal = 0,
		External = 1,
	};
}
