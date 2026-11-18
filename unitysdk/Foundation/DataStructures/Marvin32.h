#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/DataStructures/Marvin32_Marvin32State.h"

namespace System { class String; }

#define FOUNDATION_DATASTRUCTURES_MARVIN32_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x18A866E0)
#define FOUNDATION_DATASTRUCTURES_MARVIN32_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x18A86640)
#define FOUNDATION_DATASTRUCTURES_MARVIN32_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x18A86430)
#define FOUNDATION_DATASTRUCTURES_MARVIN32_MARVIN32_MIX_OFFSET UNITYSDK_OFFSET(0x18A86070)
#define FOUNDATION_DATASTRUCTURES_MARVIN32_ROTL32_OFFSET UNITYSDK_OFFSET(0x18A85EA0)
#define FOUNDATION_DATASTRUCTURES_MARVIN32_U8TO32_LE_OFFSET UNITYSDK_OFFSET(0x18A86060)

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int Marvin32_TypeDefinitionIndex = 8528;

	class Marvin32 : public ::System::Object
	{
	public:
		static ::System::UInt32 ROTL32(::System::UInt32 x, ::System::Int32 k)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_MARVIN32_ROTL32_OFFSET))(x, k);
		}

		static ::System::UInt32 U8TO32_LE(::PVOID p)
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_MARVIN32_U8TO32_LE_OFFSET))(p);
		}

		static ::System::Void Marvin32_Mix(::Foundation::DataStructures::Marvin32_Marvin32State& st, ::System::UInt32 v)
		{
			return ((::System::Void(*)(::Foundation::DataStructures::Marvin32_Marvin32State&, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_MARVIN32_MARVIN32_MIX_OFFSET))(st, v);
		}

		static ::System::UInt32 ComputeHash(::System::String* s, ::System::Int32 strLen, ::System::UInt64 seed)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_MARVIN32_COMPUTEHASH_OFFSET))(s, strLen, seed);
		}

		static ::System::UInt32 ComputeHash_1(::Il2CppArray<::System::Byte>* input, ::System::UInt64 seed)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_MARVIN32_COMPUTEHASH_1_OFFSET))(input, seed);
		}

		static ::System::UInt32 ComputeHash_2(::PVOID ptr, ::System::UInt32 len, ::System::UInt64 seed)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_MARVIN32_COMPUTEHASH_2_OFFSET))(ptr, len, seed);
		}
	};
}
