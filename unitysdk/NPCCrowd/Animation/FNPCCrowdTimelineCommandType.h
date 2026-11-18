#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineCommandType_TypeDefinitionIndex = 87479;

	enum class FNPCCrowdTimelineCommandType : ::System::Int32
	{
		ZoneUpdate = 2,
		ZoneExit = 3,
		ZoneEnter = 1,
		Event = 0,
	};
}
