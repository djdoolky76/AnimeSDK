#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174EE7E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174EE490)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174EE630)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x174EE870)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174EE8B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174EE980)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174EEA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneEntityMuteBeSelected_TypeDefinitionIndex = 73488;

	class AnimatorZoneEntityMuteBeSelected : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* tag; // 0x50
		::System::Boolean muteBeSelected; // 0x58
		::System::Boolean muteAttackerHitCameraLock; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
