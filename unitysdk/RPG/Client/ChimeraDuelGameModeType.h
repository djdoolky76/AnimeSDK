#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChimeraDuelGameModeType : ::System::Int32
	{
		Invalid = 0,
		Tutorial = 1,
		PlacementMatch = 2,
		Normal = 3,
	};
}
