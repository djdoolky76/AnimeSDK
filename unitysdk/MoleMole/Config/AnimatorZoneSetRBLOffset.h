#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174F2160)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174F1DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174F1F90)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x174F21F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174F2200)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174F22D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174F2380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetRBLOffset_TypeDefinitionIndex = 76147;

	class AnimatorZoneSetRBLOffset : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Int32 RBLOffset; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
