#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_NPCQUATERNIONSPRINGSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x601BC0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCQuaternionSpringState_TypeDefinitionIndex = 56860;

	struct alignas(4) NPCQuaternionSpringState
	{
		::UnityEngine::Quaternion PrevTarget; // 0x10
		::UnityEngine::Vector3 AngularVelocity; // 0x20
		::System::Boolean PrevTargetValid; // 0x2C

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUATERNIONSPRINGSTATE_RESET_OFFSET))(this);
		}
	};
}
