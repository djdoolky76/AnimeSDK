#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_GET_QUEUEBLOCKPOOL_OFFSET UNITYSDK_OFFSET(0x2000E5D0)
#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_ONDOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x2000E790)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueBlockPool_TypeDefinitionIndex = 18024;

	class NativeQueueBlockPool : public ::System::Object
	{
	public:
		static ::PVOID* StaticGet_pData()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(NativeQueueBlockPool_TypeDefinitionIndex)->GetStaticField(0x4110);
		}

		static ::PVOID get_QueueBlockPool()
		{
			return ((::PVOID(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_GET_QUEUEBLOCKPOOL_OFFSET))();
		}

		static ::System::Void OnDomainUnload(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_ONDOMAINUNLOAD_OFFSET))(sender, e);
		}
	};
}
