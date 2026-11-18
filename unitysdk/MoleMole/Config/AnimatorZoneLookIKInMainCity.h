#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class FDGIKPNDCGA;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x131D5E30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ISVALIDENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x131D5020)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x131D5620)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x131D4AC0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x131D54D0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0x131D5080)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETNPCTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x131D5C80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETPLAYERTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x131D5970)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKIK_OFFSET UNITYSDK_OFFSET(0x131D5260)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKTARGET_OFFSET UNITYSDK_OFFSET(0x131D5D80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x131D5EC0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x131D5ED0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x131D5FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x131D6060)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x131D6110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIKInMainCity_TypeDefinitionIndex = 55742;

	class AnimatorZoneLookIKInMainCity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* OverrideAttachPoint; // 0x0
		// static const ::System::String* OverrideAttachPoint2; // 0x0
		::System::Single overridespeedOnGetTarget; // 0x50
		::MoleMole::Config::Boolean Enable; // 0x54
		::System::Single overridespeedOnLockingTarget; // 0x58
		::System::Single overrideYawLeft; // 0x5C
		::System::Single overrideYawRight; // 0x60
		::System::Single overridespeedOnChangeTarget; // 0x64
		::System::Single overridespeedOnMissingTarget; // 0x68
		::System::Boolean enableOverrideSpeed; // 0x6C
		::System::Boolean enableOverrideAngle; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single overridePitchUp; // 0x70
		::System::Single overridePitchDown; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean IsValidEntityType(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ISVALIDENTITYTYPE_OFFSET))(this, entity);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* TryGetNpcTargetEntity(::MoleMole::Battle::Entity* entity, ::FDGIKPNDCGA* zoneInfo)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::FDGIKPNDCGA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETNPCTARGETENTITY_OFFSET))(this, entity, zoneInfo);
		}

		::MoleMole::Battle::Entity* TryGetPlayerTargetEntity(::MoleMole::Battle::Entity* entity, ::FDGIKPNDCGA* zoneInfo)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::FDGIKPNDCGA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETPLAYERTARGETENTITY_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookTarget(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* target, ::FDGIKPNDCGA* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::FDGIKPNDCGA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKTARGET_OFFSET))(this, entity, target, zoneInfo);
		}

		::System::Void SetOverride(::MoleMole::Battle::Entity* entity, ::FDGIKPNDCGA* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::FDGIKPNDCGA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_SETOVERRIDE_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookIK(::MoleMole::Battle::Entity* entity, ::FDGIKPNDCGA* zoneInfo, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::FDGIKPNDCGA*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKIK_OFFSET))(this, entity, zoneInfo, v);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
