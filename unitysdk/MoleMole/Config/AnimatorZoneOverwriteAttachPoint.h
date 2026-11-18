#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1E9F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1EB90)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_TRYSETOVERWRITEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1BA1EA80)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1EC30)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1EC70)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1ED20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverwriteAttachPoint_TypeDefinitionIndex = 81338;

	class AnimatorZoneOverwriteAttachPoint : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverriteAttachPoint; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void TrySetOverwriteAttachPoint(::MoleMole::Battle::Entity* entity, ::System::String* attach)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_TRYSETOVERWRITEATTACHPOINT_OFFSET))(this, entity, attach);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
