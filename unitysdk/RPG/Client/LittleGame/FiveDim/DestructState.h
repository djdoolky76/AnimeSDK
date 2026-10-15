#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class DestructState : ::System::Int32
	{
		None = 0,
		Destructing = 1,
		Destructed = 2,
		Rebuilding = 3,
		RebuildBlocked = 4,
	};
}
