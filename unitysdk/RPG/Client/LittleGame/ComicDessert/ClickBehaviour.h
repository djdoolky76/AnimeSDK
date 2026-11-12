#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ClickBehaviour_TypeDefinitionIndex = 44699;

	enum class ClickBehaviour : ::System::Int32
	{
		None = 0,
		Produce = 1,
		Refill = 2,
		ModeSwitch = 3,
		ServeDish = 4,
		OpenLidEmit = 5,
	};
}
