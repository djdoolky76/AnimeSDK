#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFAA5000)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAA4E20)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAA4F10)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA5090)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFAA50B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAA5180)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAA5230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAmLegIKAuthoritySwitch_TypeDefinitionIndex = 59406;

	class AnimatorZoneAmLegIKAuthoritySwitch : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* AuthorityKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
