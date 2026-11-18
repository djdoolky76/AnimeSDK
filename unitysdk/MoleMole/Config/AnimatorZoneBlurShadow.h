#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAA5D00)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAA5F60)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA61C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAA61E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAA6290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBlurShadow_TypeDefinitionIndex = 56883;

	class AnimatorZoneBlurShadow : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Int32 imageCount; // 0x50
		::System::Single shadowLifeTime; // 0x54
		::System::Single timeLimit; // 0x58
		::System::Single duration; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
