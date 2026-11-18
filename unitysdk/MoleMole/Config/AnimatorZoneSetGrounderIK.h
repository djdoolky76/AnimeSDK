#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAB0090)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAB01A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB02D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAB02E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAB0390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetGrounderIK_TypeDefinitionIndex = 93179;

	class AnimatorZoneSetGrounderIK : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean RestoreOnExit; // 0x50
		::System::Boolean isEnable; // 0x51
		::System::Boolean OverrideFootSpeed; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
