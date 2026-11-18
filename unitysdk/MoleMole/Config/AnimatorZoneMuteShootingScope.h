#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x18B897E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x18B89610)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x18B896F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B89870)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x18B89880)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x18B89950)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x18B89A00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteShootingScope_TypeDefinitionIndex = 68766;

	class AnimatorZoneMuteShootingScope : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean Mute; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
