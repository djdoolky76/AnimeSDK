#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1C790)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1CA50)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1CC80)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1CCA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1CD50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchFadeDurationOverride_TypeDefinitionIndex = 54458;

	class AnimatorZoneBuddySwitchFadeDurationOverride : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean needOverrideSwitchFadeOutDuration; // 0x50
		::System::Boolean needOverrideSwitchFadeInDuration; // 0x51
		::System::Byte _padding0[0x2];
		::System::Single overrideFadeOutDuration; // 0x54
		::System::Single overrideFadeInDuration; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
