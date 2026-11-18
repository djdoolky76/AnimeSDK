#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

class MBKPHCPCKBO_Config;

#define MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT_START_OFFSET UNITYSDK_OFFSET(0x139F81A0)
#define MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x139F8330)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSimpleRigidbodyObject_TypeDefinitionIndex = 93147;

	class MonoSimpleRigidbodyObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		static ::System::Int32* StaticGet_EPGKJEIKOKI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSimpleRigidbodyObject_TypeDefinitionIndex)->GetStaticField(0x144C0);
		}
		::MBKPHCPCKBO_Config* config; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT_START_OFFSET))(this);
		}
	};
}
