#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x163FC5C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x163FC860)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x163FCAD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x163FCAE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x163FCB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneGamepadTriggerEffect_TypeDefinitionIndex = 43747;

	class AnimatorZoneGamepadTriggerEffect : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* _gamepadTriggerEffectTag; // 0x0
		::System::String* RightTriggerEffectKey; // 0x50
		::System::String* LeftTriggerEffectKey; // 0x58
		::System::Boolean RightTriggerEnableListenInputType; // 0x60
		::System::Boolean LeftTriggerEnableListenInputType; // 0x61
		::System::Boolean EnableRightTriggerControl; // 0x62
		::System::Boolean EnableLeftTriggerControl; // 0x63
		::MoleMole::Config::InputType RightTriggerListenInputType; // 0x64
		::MoleMole::Config::InputType LeftTriggerListenInputType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
