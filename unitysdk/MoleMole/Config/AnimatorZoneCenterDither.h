#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12765CC0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12765AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12765BD0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x12765D50)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12765D60)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12765E30)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12765EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCenterDither_TypeDefinitionIndex = 90589;

	class AnimatorZoneCenterDither : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* AttachPoint; // 0x50
		::UnityEngine::Vector2 CenterDitherZW; // 0x58
		::System::Boolean UseOnAttachment; // 0x60
		::System::Byte _padding0[0x3];
		::System::Single CenterMinAlpha; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
