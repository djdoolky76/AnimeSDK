#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFFC6730)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFFC68B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC6A20)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFFC6A30)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFFC6AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAvatarSwitchOutDelay_TypeDefinitionIndex = 92742;

	class AnimatorZoneAvatarSwitchOutDelay : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean needOverrideMaxVanishDelay; // 0x50
		::System::Boolean needOverrideMinVanishDelay; // 0x51
		::System::Boolean muteVanish; // 0x52
		::System::Byte _padding0[0x1];
		::System::Single minVanishDelay; // 0x54
		::System::Single maxVanishDelay; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
