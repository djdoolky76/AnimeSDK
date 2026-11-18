#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EEF2380)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1EEF23D0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_COUNT_OFFSET UNITYSDK_OFFSET(0x1EEF2390)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CREATE_OFFSET UNITYSDK_OFFSET(0x1EEF2360)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_DESTROY_OFFSET UNITYSDK_OFFSET(0x1EEF2370)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_INSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1EEF23B0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EEF23C0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1EEF23A0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int ValueSparseHashMapHelper8_8_TypeDefinitionIndex = 5113;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class ValueSparseHashMapHelper8_8 : public ::System::Object
	{
	public:
		static ::PVOID Create(::System::UInt64 deleteKey, ::System::Int32 capacity)
		{
			return ((::PVOID(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CREATE_OFFSET))(deleteKey, capacity);
		}

		static ::System::Void Destroy(::PVOID ptr)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_DESTROY_OFFSET))(ptr);
		}

		static ::System::Void Clear(::PVOID dict)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CLEAR_OFFSET))(dict);
		}

		static ::System::Int32 Count(::PVOID dict)
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_COUNT_OFFSET))(dict);
		}

		static ::System::Boolean TryGetValue(::PVOID dict, ::System::UInt64 key, ::PVOID newValuePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_TRYGETVALUE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void InsertOrUpdate(::PVOID dict, ::System::UInt64 key, ::PVOID newValuePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_INSERTORUPDATE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void Remove(::PVOID dict, ::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_REMOVE_OFFSET))(dict, key);
		}

		static ::System::Boolean ContainsKey(::PVOID dict, ::System::UInt64 key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CONTAINSKEY_OFFSET))(dict, key);
		}
	};
}
