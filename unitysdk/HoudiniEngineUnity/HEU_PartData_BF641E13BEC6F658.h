#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F692FA30FC09F47C.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA_BF641E13BEC6F658_B25D18BE045EB163_OFFSET UNITYSDK_OFFSET(0x3897A00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BF641E13BEC6F658__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData_BF641E13BEC6F658_TypeDefinitionIndex = 18085;

	class HEU_PartData_BF641E13BEC6F658 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::F692FA30FC09F47C>* A754726B2A02B85D; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BF641E13BEC6F658__CTOR_OFFSET))(this);
		}

		::System::Void B25D18BE045EB163(::UnityEngine::Transform* E1C906AC21402CBB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BF641E13BEC6F658_B25D18BE045EB163_OFFSET))(this, E1C906AC21402CBB);
		}
	};
}
