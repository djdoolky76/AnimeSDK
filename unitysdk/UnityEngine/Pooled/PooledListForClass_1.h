#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }
namespace UnityEngine::Pooled { template <typename T> class DefaultArrayPoolSource_1; }

namespace UnityEngine::Pooled
{
	template <typename T>
	class PooledListForClass_1 : public ::System::Object
	{
	public:
		::UnityEngine::Buffers::ArrayPool_1<T>* _pool; // 0x0
		::System::Object* _syncRoot; // 0x0
		::Il2CppArray<::System::Object*>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		static ::UnityEngine::Pooled::DefaultArrayPoolSource_1<::System::Object*>** StaticGet_PublicPool()
		{
			return (::UnityEngine::Pooled::DefaultArrayPoolSource_1<::System::Object*>**)UnitySDK::FromName("UnityEngine.Pooled", "PooledListForClass`1")->GetStaticField(0x0);
		}

	};
}
