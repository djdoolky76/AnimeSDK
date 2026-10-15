#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAdventureNavigationAccuratelyMode : ::System::Int32
	{
		None = 0,
		LocationOnly = 1,
		LocationAndRotation = 2,
	};
}
