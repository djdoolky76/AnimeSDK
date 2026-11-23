#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F692FA30FC09F47C.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA_E41DF74619AB57FF_E7885E789A539AE4_OFFSET UNITYSDK_OFFSET(0x3897BA0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_E41DF74619AB57FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData_E41DF74619AB57FF_TypeDefinitionIndex = 18087;

	class HEU_PartData_E41DF74619AB57FF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::F692FA30FC09F47C>* A754726B2A02B85D; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_E41DF74619AB57FF__CTOR_OFFSET))(this);
		}

		::System::Void E7885E789A539AE4(::UnityEngine::Transform* E1C906AC21402CBB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_E41DF74619AB57FF_E7885E789A539AE4_OFFSET))(this, E1C906AC21402CBB);
		}
	};
}
