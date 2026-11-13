#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertGamePhase_TypeDefinitionIndex = 79812;

	enum class ComicDessertGamePhase : ::System::Int32
	{
		Idle = 0,
		Toast = 1,
		FriendVisit = 2,
		Running = 3,
		ServeDevice = 4,
		Closing = 5,
		Settling = 6,
	};
}
