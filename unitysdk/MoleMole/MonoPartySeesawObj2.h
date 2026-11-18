#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYSEESAWOBJ2_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B74510)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_CGCOKDADAGI_OFFSET UNITYSDK_OFFSET(0x12B73AA0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_EGNLNKOEJJH_OFFSET UNITYSDK_OFFSET(0x12B74740)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_JNKEFJBMPLL_OFFSET UNITYSDK_OFFSET(0x12B747D0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x12B738F0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B746F0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2__CTOR_OFFSET UNITYSDK_OFFSET(0x12B74630)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySeesawObj2_TypeDefinitionIndex = 68016;

	class MonoPartySeesawObj2 : public ::MoleMole::MonoPartySceneObject
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_AJPFOFGJEHG()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj2_TypeDefinitionIndex)->GetStaticField(0x4D870);
		}
		::System::Single maxAngle; // 0x40
		::System::Single rotateSpeed; // 0x44
		::System::Single recoverSpeed; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::BoxCollider* mainCollider; // 0x50
		::UnityEngine::Vector3 DCJCBIIEMEI; // 0x58
		::System::Single OKIHJINONIK; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2__CCTOR_OFFSET))();
		}

		::System::Void OnDoUpdate(::System::UInt32 FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_ONDOUPDATE_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_AWAKE_OFFSET))(this);
		}

		::System::Void EGNLNKOEJJH(::System::UInt32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_EGNLNKOEJJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single CGCOKDADAGI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_CGCOKDADAGI_OFFSET))(this);
		}

		static ::System::Int32 JNKEFJBMPLL(::UnityEngine::Vector3 JBCNPOHMGPE, ::UnityEngine::Vector3 CHEIPMLJCAP)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_JNKEFJBMPLL_OFFSET))(JBCNPOHMGPE, CHEIPMLJCAP);
		}
	};
}
