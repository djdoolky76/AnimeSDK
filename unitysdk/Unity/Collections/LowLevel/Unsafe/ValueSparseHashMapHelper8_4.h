#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E96BAB0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_COUNT_OFFSET UNITYSDK_OFFSET(0x1E96BAC0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CREATE_OFFSET UNITYSDK_OFFSET(0x1E96BA90)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E96BAA0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_INSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1E96BAE0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1E96BAD0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int ValueSparseHashMapHelper8_4_TypeDefinitionIndex = 5114;

	template <typename T1, typename T2, typename T3, typename T4>
	class ValueSparseHashMapHelper8_4 : public ::System::Object
	{
	public:
		static ::PVOID Create(::System::UInt64 deleteKey, ::System::Int32 capacity)
		{
			return ((::PVOID(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CREATE_OFFSET))(deleteKey, capacity);
		}

		static ::System::Void Destroy(::PVOID ptr)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_DESTROY_OFFSET))(ptr);
		}

		static ::System::Void Clear(::PVOID dict)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CLEAR_OFFSET))(dict);
		}

		static ::System::Int32 Count(::PVOID dict)
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_COUNT_OFFSET))(dict);
		}

		static ::System::Boolean TryGetValue(::PVOID dict, ::System::UInt64 key, ::PVOID newValuePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_TRYGETVALUE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void InsertOrUpdate(::PVOID dict, ::System::UInt64 key, ::PVOID newValuePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_INSERTORUPDATE_OFFSET))(dict, key, newValuePtr);
		}
	};
}
