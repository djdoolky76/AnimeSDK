#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EvolveBuildGearManager_EvolveBuildSelectPriority : ::System::Byte
	{
		Evolve = 5,
		Resonance = 4,
		Upgrade = 2,
		Normal = 1,
	};
}
