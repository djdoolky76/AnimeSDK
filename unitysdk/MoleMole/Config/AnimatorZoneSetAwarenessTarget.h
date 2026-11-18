#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ALLOWFOLLOWAWARENESSTARGETTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x163FF530)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x163FF0B0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_DOAWARENESSLOCKPROCESS_OFFSET UNITYSDK_OFFSET(0x163FEDA0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ISINAWARENESSLIST_OFFSET UNITYSDK_OFFSET(0x163FF3C0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x163FF770)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x163FED10)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x163FF290)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_SETENTITYAWARENESSTARGET_OFFSET UNITYSDK_OFFSET(0x163FF140)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x163FFA10)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x163FFA20)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x163FFAF0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x163FFBB0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x163FFC60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_TypeDefinitionIndex = 79652;

	class AnimatorZoneSetAwarenessTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AwarenessUpdateSegmentList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void DoAwarenessLockProcess(::MoleMole::Battle::Entity* entity, ::PKMJPMFCNBK* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_DOAWARENESSLOCKPROCESS_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void SetEntityAwarenessTarget(::MoleMole::Battle::Entity* entity, ::PKMJPMFCNBK* zoneInfo, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::PKMJPMFCNBK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_SETENTITYAWARENESSTARGET_OFFSET))(this, entity, zoneInfo, pos);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean IsInAwarenessList(::System::Single normalizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ISINAWARENESSLIST_OFFSET))(this, normalizedTime);
		}

		::System::Boolean AllowFollowAwarenessTargetToAttackTarget(::MoleMole::Battle::Entity* entity, ::System::Single normlizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ALLOWFOLLOWAWARENESSTARGETTOATTACKTARGET_OFFSET))(this, entity, normlizedTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
