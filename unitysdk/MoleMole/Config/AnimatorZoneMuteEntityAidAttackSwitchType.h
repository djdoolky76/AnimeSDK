#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1928E870)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1928E9A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1928EAD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1928EAE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1928EB50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteEntityAidAttackSwitchType_TypeDefinitionIndex = 50058;

	class AnimatorZoneMuteEntityAidAttackSwitchType : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* _muteTag; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>* SwitchTypeList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
