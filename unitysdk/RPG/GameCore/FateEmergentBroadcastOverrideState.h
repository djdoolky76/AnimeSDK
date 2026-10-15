#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FateEmergentBroadcastOverrideState : ::System::Int32
	{
		None = 0,
		PreBattle = 1,
		PostBattle = 2,
	};
}
