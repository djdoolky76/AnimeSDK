#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x165294A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16529A80)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT__CTOR_OFFSET UNITYSDK_OFFSET(0x16529CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x16529E00)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16529EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideBePerfectSwitchPosRot_TypeDefinitionIndex = 77320;

	class AnimatorZoneOverrideBePerfectSwitchPosRot : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::MoleMole::Config::ConfigPosRot*>* BePerfectSwitchPosRotSlot2Dict; // 0x50
		::System::String* ForceLockFeatureTargetTag; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::MoleMole::Config::ConfigPosRot*>* BePerfectSwitchPosRotDict; // 0x60
		::System::Boolean EnableForceLockFeatureTarget; // 0x68
		::System::Boolean EnableOverrideSlot2; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBEPERFECTSWITCHPOSROT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
