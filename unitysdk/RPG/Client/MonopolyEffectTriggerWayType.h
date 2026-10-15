#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonopolyEffectTriggerWayType : ::System::Int32
	{
		LevelGraph = 0,
		Immediately = 1,
		InstantAssetTax = 2,
	};
}
