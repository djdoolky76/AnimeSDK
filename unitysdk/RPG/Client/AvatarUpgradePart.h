#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AvatarUpgradePart : ::System::Int32
	{
		Level = 1,
		Promotion = 2,
		LightCone = 4,
		RelicSet2 = 8,
		RelicSet4 = 16,
		Relic = 24,
		TraceTree = 32,
		Eidolon = 64,
		All = 127,
	};
}
