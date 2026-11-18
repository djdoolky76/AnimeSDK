#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_CapsuleDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CHECKMATCHANDCLEARRECORD_OFFSET UNITYSDK_OFFSET(0x19B08CD0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19B09160)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B087E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19B08100)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19B08880)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_RECORDCOLLIDERSIZEINDEX_OFFSET UNITYSDK_OFFSET(0x19B084E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B091F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19B09200)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B092D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19B09390)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19B09440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_TypeDefinitionIndex = 81617;

	class AnimatorZoneChangeColliderSize : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* BlendCurveEntry; // 0x50
		::System::String* BlendCurveExit; // 0x58
		::System::String* ColliderName; // 0x60
		::System::Single BlendTimeEntry; // 0x68
		::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType Collider; // 0x6C
		::MoleMole::Config::AnimatorZoneChangeColliderSize_CapsuleDirection Direction; // 0x70
		::System::Boolean EnableOverrideCenter; // 0x74
		::System::Byte _padding0[0x3];
		::System::Single OverrideColliderParam2; // 0x78
		::System::Single BlendTimeExit; // 0x7C
		::UnityEngine::Vector3 OverrideCenter; // 0x80
		::System::Single OverrideColliderParam; // 0x8C
		::System::Single OverrideColliderParam1; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean RecordColliderSizeIndex(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType colliderType, ::System::String* colName, ::System::Int32 recordIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_RECORDCOLLIDERSIZEINDEX_OFFSET))(this, entity, colliderType, colName, recordIndex);
		}

		::System::Boolean CheckMatchAndClearRecord(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType colliderType, ::System::String* colName, ::System::Int32 recordIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CHECKMATCHANDCLEARRECORD_OFFSET))(this, entity, colliderType, colName, recordIndex);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
