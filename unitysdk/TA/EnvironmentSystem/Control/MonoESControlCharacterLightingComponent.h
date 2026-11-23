#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TA_ENVIRONMENTSYSTEM_CONTROL_MONOESCONTROLCHARACTERLIGHTINGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x28CC780)

namespace TA::EnvironmentSystem::Control
{
	inline static constexpr unsigned int MonoESControlCharacterLightingComponent_TypeDefinitionIndex = 16338;

	class MonoESControlCharacterLightingComponent
	{
	public:
		::UnityEngine::E46B881AA2636190 CharacterLightColor; // 0x28
		::System::Single CharacterLightIntensity; // 0x38
		::System::Boolean EnableCharacterBloomIntensityControl; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single CharacterBloomIntensity; // 0x40
		::System::Boolean SyncCharacterWithMainLight; // 0x44
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 CharacterLightDirection; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CONTROL_MONOESCONTROLCHARACTERLIGHTINGCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
