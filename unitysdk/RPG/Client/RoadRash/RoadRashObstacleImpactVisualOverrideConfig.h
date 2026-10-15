#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashObstacleImpactVisualOverrideConfig_TypeDefinitionIndex = 75876;

	struct alignas(4) RoadRashObstacleImpactVisualOverrideConfig
	{
		::RPG::Client::RoadRash::MonoEffectConfig AttackerEffectConfig; // 0x10
		::System::Single VisualEffectDuration; // 0x40
	};
}
