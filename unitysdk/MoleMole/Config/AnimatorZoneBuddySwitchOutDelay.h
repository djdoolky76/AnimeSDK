#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11A58B90)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11A58D10)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x11A58E80)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11A58E90)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11A58F40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchOutDelay_TypeDefinitionIndex = 58913;

	class AnimatorZoneBuddySwitchOutDelay : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single maxVanishDelay; // 0x50
		::System::Boolean muteVanish; // 0x54
		::System::Boolean needOverrideMaxVanishDelay; // 0x55
		::System::Boolean needOverrideMinVanishDelay; // 0x56
		::System::Byte _padding0[0x1];
		::System::Single minVanishDelay; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
