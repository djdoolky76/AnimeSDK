#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D5D5880)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1D5D50F0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_BYTEARRAYGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D5D6130)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_CALCULATECAPACITY_OFFSET UNITYSDK_OFFSET(0x1D5D50B0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5D6300)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5D6350)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D5D5260)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUESLOW_OFFSET UNITYSDK_OFFSET(0x1D5D5F60)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D5D5D10)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D5D5AE0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5D63A0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5D5000)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D4F50)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable_TypeDefinitionIndex = 30448;

	class ByteArrayStringHashTable : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Is32Bit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ByteArrayStringHashTable_TypeDefinitionIndex)->GetStaticField(0x7EE0);
		}
		::Il2CppArray<::Il2CppArray<::System::Object*>*>* buckets; // 0x10
		::System::UInt64 indexFor; // 0x18

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1(::System::Int32 capacity, ::System::Single loadFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_1_OFFSET))(this, capacity, loadFactor);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CCTOR_OFFSET))();
		}

		::System::Void Add(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_OFFSET))(this, key, value);
		}

		::System::Void Add_1(::Il2CppArray<::System::Byte>* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_1_OFFSET))(this, key, value);
		}

		::System::Boolean TryAddInternal(::Il2CppArray<::System::Byte>* key, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYADDINTERNAL_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValue(::System::Buffers::ReadOnlySequence_1<::System::Byte>& key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValue_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_1_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValueSlow(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> key, ::Il2CppArray<::System::Object*>* entry, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>, ::Il2CppArray<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUESLOW_OFFSET))(this, key, entry, value);
		}

		static ::System::UInt64 ByteArrayGetHashCode(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> x)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_BYTEARRAYGETHASHCODE_OFFSET))(x);
		}

		static ::System::Int32 CalculateCapacity(::System::Int32 collectionSize, ::System::Single loadFactor)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_CALCULATECAPACITY_OFFSET))(collectionSize, loadFactor);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
