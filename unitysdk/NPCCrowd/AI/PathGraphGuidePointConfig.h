#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x114B43B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointConfig_TypeDefinitionIndex = 71192;

	class PathGraphGuidePointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
