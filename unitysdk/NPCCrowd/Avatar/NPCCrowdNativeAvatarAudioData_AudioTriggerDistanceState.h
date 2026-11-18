#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbility; }

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdNativeAvatarAudioData_AudioTriggerDistanceState_TypeDefinitionIndex = 79157;

	struct alignas(8) NPCCrowdNativeAvatarAudioData_AudioTriggerDistanceState
	{
		::NPCCrowd::Ability::NPCAbility* Ability; // 0x10
		::System::Int32 Handler; // 0x18
		::System::Boolean Registered; // 0x1C
	};
}
