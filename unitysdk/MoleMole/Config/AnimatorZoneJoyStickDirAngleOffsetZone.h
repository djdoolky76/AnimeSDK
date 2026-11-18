#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1908F820)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1908F2B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1908F570)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1908F8B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1908F8C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1908F990)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1908FA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirAngleOffsetZone_TypeDefinitionIndex = 83982;

	class AnimatorZoneJoyStickDirAngleOffsetZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single offsetAngle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
