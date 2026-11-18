#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/NOHOHLMKMGG_NCONPHBDMGI.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CCACHJICOBI;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CAPSULEOVERLAPTEST_OFFSET UNITYSDK_OFFSET(0x19B0B660)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CHECKOVERLAPOTHER_OFFSET UNITYSDK_OFFSET(0x19B0AE20)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19B0B5D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_INITCOLLIDERINFO_OFFSET UNITYSDK_OFFSET(0x19B09DC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B0AC80)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19B09B70)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19B0AB30)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_SMALLVALUE_OFFSET UNITYSDK_OFFSET(0x19B0BA90)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0BB20)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19B0BB30)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B0BC00)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19B0BCC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19B0BD70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDitherInCollision_TypeDefinitionIndex = 65675;

	class AnimatorZoneDitherInCollision : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* DitherTag; // 0x0
		::System::String* ditherKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean CheckOverlapOther(::CCACHJICOBI* zoneInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCACHJICOBI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CHECKOVERLAPOTHER_OFFSET))(this, zoneInfo);
		}

		::System::Int32 CapsuleOverlapTest(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::NOHOHLMKMGG_NCONPHBDMGI colliderInfo, ::CCACHJICOBI* zoneInfo)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::NOHOHLMKMGG_NCONPHBDMGI, ::CCACHJICOBI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CAPSULEOVERLAPTEST_OFFSET))(this, position, rotation, colliderInfo, zoneInfo);
		}

		::System::Void InitColliderInfo(::MoleMole::Battle::Entity* entity, ::CCACHJICOBI* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::CCACHJICOBI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_INITCOLLIDERINFO_OFFSET))(this, entity, zoneInfo);
		}

		::System::Single SmallValue(::System::Single v)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_SMALLVALUE_OFFSET))(this, v);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
