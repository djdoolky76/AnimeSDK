#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA1BB40)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1BBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1BDD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1BF10)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA1BF20)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1BFF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1C0A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAddBuddyMoveXZ_TypeDefinitionIndex = 44831;

	class AnimatorZoneAddBuddyMoveXZ : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single Value; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ__CTOR_OFFSET))(this);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
