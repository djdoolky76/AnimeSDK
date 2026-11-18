#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class GEMGECAAPJD;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x121AB210)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x121AAD70)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x121AA400)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x121AAB80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0x121AA760)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x121AAF30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKIK_OFFSET UNITYSDK_OFFSET(0x121AA950)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKTARGET_OFFSET UNITYSDK_OFFSET(0x121AACD0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK__CTOR_OFFSET UNITYSDK_OFFSET(0x121AB470)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x121AB480)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x121AB550)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x121AB610)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x121AB6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIK_TypeDefinitionIndex = 63826;

	class AnimatorZoneLookIK : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideAttachPoint; // 0x50
		::System::Single overridePitchUp; // 0x58
		::MoleMole::Config::Boolean Enable; // 0x5C
		::System::Single overrideYawLeft; // 0x60
		::System::Single overridespeedOnGetTarget; // 0x64
		::System::Single overridePitchDown; // 0x68
		::System::Single overridespeedOnChangeTarget; // 0x6C
		::System::Single overridespeedOnLockingTarget; // 0x70
		::System::Single overridespeedOnMissingTarget; // 0x74
		::System::Single overrideYawRight; // 0x78
		::System::Boolean enableOverrideSpeed; // 0x7C
		::System::Boolean firstEnter; // 0x7D
		::System::Boolean enableOverrideAngle; // 0x7E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* TryGetTargetEntity(::MoleMole::Battle::Entity* entity, ::GEMGECAAPJD* zoneInfo)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::GEMGECAAPJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYGETTARGETENTITY_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookTarget(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* target, ::GEMGECAAPJD* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::GEMGECAAPJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKTARGET_OFFSET))(this, entity, target, zoneInfo);
		}

		::System::Void SetOverride(::MoleMole::Battle::Entity* entity, ::GEMGECAAPJD* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::GEMGECAAPJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_SETOVERRIDE_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookIK(::MoleMole::Battle::Entity* entity, ::GEMGECAAPJD* zoneInfo, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::GEMGECAAPJD*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKIK_OFFSET))(this, entity, zoneInfo, v);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
