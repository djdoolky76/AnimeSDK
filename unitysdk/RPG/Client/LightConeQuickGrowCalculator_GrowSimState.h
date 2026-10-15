#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) LightConeQuickGrowCalculator_GrowSimState
	{
		::System::UInt32 LightConeLevel; // 0x10
		::System::UInt32 AccumulatedExp; // 0x14
		::System::UInt32 PromotionLevel; // 0x18
	};
}
