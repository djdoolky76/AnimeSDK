#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilitySmoothOrientationWeights; }

#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x105DF950)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySmoothOrientationParameters_TypeDefinitionIndex = 54177;

	class NPCAbilitySmoothOrientationParameters : public ::System::Object
	{
	public:
		::System::Single EndOfPathDuration; // 0x10
		::System::Boolean LockYAxis; // 0x14
		::System::Byte _padding0[0x3];
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationWeights* Moving; // 0x18
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationWeights* Standing; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
