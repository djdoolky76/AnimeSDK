#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1651EE60)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1651EFE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1651F180)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1651F190)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1651F240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchMoveState_TypeDefinitionIndex = 46612;

	class AnimatorZoneBuddySwitchMoveState : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Battle::BuddyMoveStatus savedStatus; // 0x50
		::MoleMole::Battle::BuddyMoveStatus exitMoveStatus; // 0x54
		::MoleMole::Battle::BuddyMoveStatus enterMoveStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
