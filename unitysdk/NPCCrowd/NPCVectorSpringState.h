#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_NPCVECTORSPRINGSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x74C660)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCVectorSpringState_TypeDefinitionIndex = 70524;

	struct alignas(4) NPCVectorSpringState
	{
		::UnityEngine::Vector3 PrevTarget; // 0x10
		::UnityEngine::Vector3 Velocity; // 0x1C
		::System::Boolean PrevTargetValid; // 0x28

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCVECTORSPRINGSTATE_RESET_OFFSET))(this);
		}
	};
}
