#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFHHIDCLGIA.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYTRIGGEROBJ_ONDOCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x12B748D0)
#define MOLEMOLE_MONOPARTYTRIGGEROBJ_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12B74880)
#define MOLEMOLE_MONOPARTYTRIGGEROBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12B74A90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartyTriggerObj_TypeDefinitionIndex = 64163;

	class MonoPartyTriggerObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* APAKCEHEJGP; // 0x40
		::JFHHIDCLGIA triggerType; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* triggerName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYTRIGGEROBJ__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYTRIGGEROBJ_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnDoCollisionEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYTRIGGEROBJ_ONDOCOLLISIONENTER_OFFSET))(this, LIBPKNHDIGP);
		}
	};
}
