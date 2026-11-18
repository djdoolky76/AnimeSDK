#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_AIACTIONNAVMESHTOCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x650570)
#define NPCCROWD_AI_AIACTIONNAVMESHTOCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x6505C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionNavmeshToConfig_TypeDefinitionIndex = 66983;

	struct alignas(4) AIActionNavmeshToConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::UnityEngine::Vector3 destination; // 0x18
		::System::Boolean overrideStopDistance; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single stopDistance; // 0x28

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONNAVMESHTOCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONNAVMESHTOCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
