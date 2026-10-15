#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace Collections::Pooled { template <typename T> class IPooledList_1; }
namespace System { class Object; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }

namespace Collections::Pooled
{
	template <typename T>
	class PooledListForClass_1 : public ::System::Object
	{
	public:
		::System::Buffers::ArrayPool_1<T>* _pool; // 0x0
		::Il2CppArray<::System::Object*>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		::Collections::Pooled::IPooledList_1<T>* _pooledListImplementation; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>** StaticGet_PublicPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>**)UnitySDK::FromName("Collections.Pooled", "PooledListForClass`1")->GetStaticField(0x0);
		}

		// static const ::System::Object s_maxArrayLength; // 0x0
		// static const ::System::Object s_defaultCapacity; // 0x0
	};
}
