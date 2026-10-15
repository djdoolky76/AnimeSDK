#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RoleSwitchCondType : ::System::Int32
	{
		None = 0,
		ByMaxTrait = 1,
		ByPlacedInBackRegion = 2,
	};
}
