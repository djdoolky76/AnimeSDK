#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/WallColliderLayerType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174F2920)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174F2440)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174F26B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x174F29B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x174F29C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x174F2A90)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x174F2B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWallColliderLayer_TypeDefinitionIndex = 41382;

	class AnimatorZoneWallColliderLayer : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* WallColliderList; // 0x50
		::MoleMole::Config::WallColliderLayerType Layer; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
