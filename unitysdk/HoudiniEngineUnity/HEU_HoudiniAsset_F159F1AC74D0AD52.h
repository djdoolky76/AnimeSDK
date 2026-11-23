#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F692FA30FC09F47C.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F159F1AC74D0AD52_F738B9C5A96845F1_OFFSET UNITYSDK_OFFSET(0x387E550)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F159F1AC74D0AD52__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_F159F1AC74D0AD52_TypeDefinitionIndex = 18026;

	class HEU_HoudiniAsset_F159F1AC74D0AD52 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::F692FA30FC09F47C>* A754726B2A02B85D; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F159F1AC74D0AD52__CTOR_OFFSET))(this);
		}

		::System::Void F738B9C5A96845F1(::UnityEngine::Transform* E1C906AC21402CBB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F159F1AC74D0AD52_F738B9C5A96845F1_OFFSET))(this, E1C906AC21402CBB);
		}
	};
}
