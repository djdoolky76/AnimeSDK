#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x163FFD20)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x163FFFE0)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x164002A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x164002B0)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16400360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSwitchCharacterZone_TypeDefinitionIndex = 69146;

	class AnimatorZoneSwitchCharacterZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Config::ConfigPosRot* overridePosRot; // 0x50
		::MoleMole::Battle::AnimatorParamControl* switchOutParamControl; // 0x58
		::MoleMole::Battle::AnimatorParamControl* switchInParamControl; // 0x60
		::System::Single overrideTriggerSwitchInDelay; // 0x68
		::System::Boolean needOverrideSwitchPosRot; // 0x6C
		::System::Boolean needOverrideTriggerSwitchInDelay; // 0x6D
		::System::Boolean needOverrideTriggerSwitchOutDelay; // 0x6E
		::System::Byte _padding0[0x1];
		::System::Single overrideTriggerSwitchOutDelay; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
