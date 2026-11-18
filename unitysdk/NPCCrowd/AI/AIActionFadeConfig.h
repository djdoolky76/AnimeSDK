#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONFADECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x67CE10)
#define NPCCROWD_AI_AIACTIONFADECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x67CE60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionFadeConfig_TypeDefinitionIndex = 45590;

	struct alignas(4) AIActionFadeConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Boolean fadeIn; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single fadeTime; // 0x1C
		::System::Single delay; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONFADECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONFADECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
