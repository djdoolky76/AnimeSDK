#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_TypeDefinitionIndex = 5101;

	template <typename T1, typename T2>
	class PooledDictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _entries; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Int32 _freeCount; // 0x0
		::System::Int32 _version; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* _comparer; // 0x0
		::System::Object* _keys; // 0x0
		::System::Object* _values; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Boolean _clearKeyOnFree; // 0x0
		::System::Boolean _clearValueOnFree; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>** StaticGet_s_bucketPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>**)UnitySDK::FromName("Collections.Pooled", "PooledDictionary`2")->GetStaticField(0x0);
		}

		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>** StaticGet_s_entryPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>**)UnitySDK::FromName("Collections.Pooled", "PooledDictionary`2")->GetStaticField(0x0);
		}

		// static const ::System::String* s_versionName; // 0x0
		// static const ::System::String* s_hashSizeName; // 0x0
		// static const ::System::String* s_keyValuePairsName; // 0x0
		// static const ::System::String* s_comparerName; // 0x0
		// static const ::System::String* s_clearKeyName; // 0x0
		// static const ::System::String* s_clearValueName; // 0x0
		// static const ::System::Object s_startOfFreeList; // 0x0
	};
}
