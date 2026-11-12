#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine::Rendering { class QueueData; }

#define UNITYENGINE_RENDERING_QUEUEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x20577840)
#define UNITYENGINE_RENDERING_QUEUEDATA_FREE_OFFSET UNITYSDK_OFFSET(0x20577850)
#define UNITYENGINE_RENDERING_QUEUEDATA_GET_OFFSET UNITYSDK_OFFSET(0x20577830)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int QueueData_TypeDefinitionIndex = 36430;

	class QueueData : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10
		::UnityEngine::Rendering::QueueData* next; // 0x18
		static ::UnityEngine::Rendering::QueueData** StaticGet_free()
		{
			return (::UnityEngine::Rendering::QueueData**)UnitySDK::FromName("UnityEngine.Rendering", "QueueData")->GetStaticField(0x5AC60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_QUEUEDATA_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::QueueData* Get()
		{
			return ((::UnityEngine::Rendering::QueueData*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_QUEUEDATA_GET_OFFSET))();
		}

		static ::System::Void Free(::UnityEngine::Rendering::QueueData* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::QueueData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_QUEUEDATA_FREE_OFFSET))(a1);
		}

	};
}
