#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventArgs; }

#define MOLEMOLE_MONODIGIBOOSCENEOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x139F2FE0)
#define MOLEMOLE_MONODIGIBOOSCENEOBJECT_IDLCJGPHMMP_OFFSET UNITYSDK_OFFSET(0x139F3160)
#define MOLEMOLE_MONODIGIBOOSCENEOBJECT_ILDNCNCONAE_OFFSET UNITYSDK_OFFSET(0x139F34A0)
#define MOLEMOLE_MONODIGIBOOSCENEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x139F32E0)
#define MOLEMOLE_MONODIGIBOOSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x139F3450)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDigibooSceneObject_TypeDefinitionIndex = 75169;

	class MonoDigibooSceneObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 DigibooHandbookID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOSCENEOBJECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOSCENEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void IDLCJGPHMMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOSCENEOBJECT_IDLCJGPHMMP_OFFSET))(this);
		}

		::System::Void ILDNCNCONAE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOSCENEOBJECT_ILDNCNCONAE_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
