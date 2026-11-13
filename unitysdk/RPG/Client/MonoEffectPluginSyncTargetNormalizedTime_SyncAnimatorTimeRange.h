#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorTimeRange_TypeDefinitionIndex = 72083;

	struct alignas(4) MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorTimeRange
	{
		::System::Single StartTime; // 0x10
		::System::Single EndTime; // 0x14
	};
}
