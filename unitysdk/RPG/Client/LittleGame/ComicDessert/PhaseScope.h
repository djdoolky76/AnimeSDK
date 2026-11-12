#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int PhaseScope_TypeDefinitionIndex = 79814;

	enum class PhaseScope : ::System::UInt32
	{
		None = 0,
		Toast = 1,
		FriendVisit = 2,
		Running = 4,
		ServeDevice = 8,
		BusinessStart = 16,
		Closing = 32,
		All = 4294967295,
	};
}
