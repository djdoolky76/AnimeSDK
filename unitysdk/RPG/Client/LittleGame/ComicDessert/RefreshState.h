#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int RefreshState_TypeDefinitionIndex = 79954;

	enum class RefreshState : ::System::Int32
	{
		Idle = 0,
		Configured = 1,
		Prepared = 2,
		Running = 3,
		Stopped = 4,
	};
}
