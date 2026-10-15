#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledSet_1_TypeDefinitionIndex = 5124;

	template <typename T>
	class PooledSet_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _slots; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _lastIndex; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>** StaticGet_s_bucketPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>**)UnitySDK::FromName("Collections.Pooled", "PooledSet`1")->GetStaticField(0x0);
		}

		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>** StaticGet_s_slotPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>**)UnitySDK::FromName("Collections.Pooled", "PooledSet`1")->GetStaticField(0x0);
		}

		// static const ::System::Object s_lower31BitMask; // 0x0
		// static const ::System::Object s_stackAllocThreshold; // 0x0
		// static const ::System::Object s_shrinkThreshold; // 0x0
		// static const ::System::String* s_capacityName; // 0x0
		// static const ::System::String* s_elementsName; // 0x0
		// static const ::System::String* s_comparerName; // 0x0
		// static const ::System::String* s_versionName; // 0x0
	};
}
