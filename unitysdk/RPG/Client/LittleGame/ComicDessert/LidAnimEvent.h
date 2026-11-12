#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int LidAnimEvent_TypeDefinitionIndex = 80091;

	enum class LidAnimEvent : ::System::Int32
	{
		Opened = 0,
		Closed = 1,
	};
}
