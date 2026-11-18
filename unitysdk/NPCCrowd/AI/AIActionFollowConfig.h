#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x5A6E80)
#define NPCCROWD_AI_AIACTIONFOLLOWCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x5A6ED0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionFollowConfig_TypeDefinitionIndex = 89731;

	struct alignas(4) AIActionFollowConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Single duration; // 0x18
		::System::Boolean completeOnEnter; // 0x1C
		::System::Boolean isExit; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single stopRadius; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONFOLLOWCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
