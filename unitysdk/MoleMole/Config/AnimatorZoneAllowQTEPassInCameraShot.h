#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174EBE30)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174EBF70)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x174EC0B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174EC0C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174EC170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAllowQTEPassInCameraShot_TypeDefinitionIndex = 78993;

	class AnimatorZoneAllowQTEPassInCameraShot : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* AllowQTEPassTag; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
