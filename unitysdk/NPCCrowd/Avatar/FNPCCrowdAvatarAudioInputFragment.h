#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarAudioInputFragment_TypeDefinitionIndex = 62962;

	struct alignas(4) FNPCCrowdAvatarAudioInputFragment
	{
		::System::UInt32 EntityId; // 0x10
		::System::Boolean IsUsing; // 0x14
		::System::Boolean HasAudioEmitter; // 0x15
		::System::Boolean RtpcInitialized; // 0x16
		::System::Boolean AudioEnableTrigger; // 0x17
		::System::Boolean AudioTriggerInRange; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single AudioLastTriggerTime; // 0x1C
		::System::Single TriggerCooldown; // 0x20
		::System::Single TriggerDistance; // 0x24
		::UnityEngine::Vector3 Velocity; // 0x28
		::System::Single MaxSpeed; // 0x34
		::System::Int32 LastRtpcPercent; // 0x38
	};
}
