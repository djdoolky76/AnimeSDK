#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYSEESAWOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B72AE0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_EGNLNKOEJJH_OFFSET UNITYSDK_OFFSET(0x12B73860)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_JJNLBFKEEMJ_OFFSET UNITYSDK_OFFSET(0x12B73740)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x12B72B60)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B72B20)
#define MOLEMOLE_MONOPARTYSEESAWOBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B736E0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12B73620)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySeesawObj_TypeDefinitionIndex = 54547;

	class MonoPartySeesawObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_overlapBuffer()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj_TypeDefinitionIndex)->GetStaticField(0x4D860);
		}
		static ::UnityEngine::Vector3* StaticGet_CDFDBEKOINP()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj_TypeDefinitionIndex)->GetStaticField(0x122F0);
		}
		::System::Single maxAngle; // 0x40
		::System::Single rotateAnglePerSec; // 0x44
		::System::Single recoverDegreePerSec; // 0x48
		::UnityEngine::Vector3 ColliderSize; // 0x4C
		::System::UInt32 PIEMAKFEHLH; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_UPDATE_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_ONDOUPDATE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void JJNLBFKEEMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_JJNLBFKEEMJ_OFFSET))(this);
		}

		::System::Void EGNLNKOEJJH(::System::UInt32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_EGNLNKOEJJH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
