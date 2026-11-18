#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174F1B00)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174F17E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174F19E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x174F1B90)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174F1BA0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174F1C70)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174F1D20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetGravity_TypeDefinitionIndex = 53549;

	class AnimatorZoneSetGravity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single gravityVelocityOverride; // 0x50
		::System::Single gravityAccelerateOverride; // 0x54
		::System::Single groundThresholdOverride; // 0x58
		::System::Boolean isEnableGravity; // 0x5C
		::System::Boolean isEnableGroundThreshold; // 0x5D
		::System::Boolean isEnableGroundThresholdOverride; // 0x5E
		::System::Boolean isEnableGravityOverride; // 0x5F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
