#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAdventureMovementUnavailableReason : ::System::Int32
	{
		Default = 0,
		UnloadScene = 1,
	};
}
