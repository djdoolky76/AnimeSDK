#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ECA0C10)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_COUNT_OFFSET UNITYSDK_OFFSET(0x1ECA0C20)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECA0BF0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ECA0C00)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_INSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1ECA0C40)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1ECA0C30)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int ValueSparseHashMapHelper8_32_TypeDefinitionIndex = 5112;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32>
	class ValueSparseHashMapHelper8_32 : public ::System::Object
	{
	public:
		static ::PVOID Create(::System::UInt64 deleteKey, ::System::Int32 capacity)
		{
			return ((::PVOID(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_CREATE_OFFSET))(deleteKey, capacity);
		}

		static ::System::Void Destroy(::PVOID ptr)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_DESTROY_OFFSET))(ptr);
		}

		static ::System::Void Clear(::PVOID dict)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_CLEAR_OFFSET))(dict);
		}

		static ::System::Int32 Count(::PVOID dict)
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_COUNT_OFFSET))(dict);
		}

		static ::System::Boolean TryGetValue(::PVOID dict, ::System::UInt64 key, ::PVOID newValuePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_TRYGETVALUE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void InsertOrUpdate(::PVOID dict, ::System::UInt64 key, ::PVOID newValuePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_32_INSERTORUPDATE_OFFSET))(dict, key, newValuePtr);
		}
	};
}
