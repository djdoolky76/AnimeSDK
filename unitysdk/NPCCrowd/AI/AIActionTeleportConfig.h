#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_AIACTIONTELEPORTCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x5907D0)
#define NPCCROWD_AI_AIACTIONTELEPORTCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x590820)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionTeleportConfig_TypeDefinitionIndex = 87300;

	struct alignas(4) AIActionTeleportConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Boolean findPlayerPosAround; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 position; // 0x1C
		::UnityEngine::Quaternion rotation; // 0x28

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONTELEPORTCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONTELEPORTCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
