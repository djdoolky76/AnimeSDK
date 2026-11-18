#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/NPCSinglePlayableAnimLayer.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x680430)
#define NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x680480)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlaySingleClipMontageConfig_TypeDefinitionIndex = 47482;

	struct alignas(4) AIActionPlaySingleClipMontageConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Int32 animID; // 0x18
		::NPCCrowd::Ability::EMontagePriorityLayer montageLayer; // 0x1C
		::MoleMole::Battle::NPCSinglePlayableAnimLayer clipLayer; // 0x20
		::System::Boolean controlDuration; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single duration; // 0x28

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
