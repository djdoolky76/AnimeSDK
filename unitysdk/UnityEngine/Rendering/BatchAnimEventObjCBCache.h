#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimEventObjCBCache_TypeDefinitionIndex = 4788;

	struct alignas(4) BatchAnimEventObjCBCache
	{
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchAnimEventObjCB>* StaticGet_eventObjectsCache()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchAnimEventObjCB>*)UnitySDK::FromName("UnityEngine.Rendering", "BatchAnimEventObjCBCache")->GetStaticField(0x4120);
		}

	};
}
