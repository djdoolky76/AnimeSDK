#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TUPLE_COMBINEHASHCODES_1_OFFSET UNITYSDK_OFFSET(0x1DD996C0)
#define SYSTEM_TUPLE_COMBINEHASHCODES_2_OFFSET UNITYSDK_OFFSET(0x1DD996E0)
#define SYSTEM_TUPLE_COMBINEHASHCODES_3_OFFSET UNITYSDK_OFFSET(0x1DD99710)
#define SYSTEM_TUPLE_COMBINEHASHCODES_4_OFFSET UNITYSDK_OFFSET(0x1DD99740)
#define SYSTEM_TUPLE_COMBINEHASHCODES_5_OFFSET UNITYSDK_OFFSET(0x1DD99780)
#define SYSTEM_TUPLE_COMBINEHASHCODES_6_OFFSET UNITYSDK_OFFSET(0x1DD997D0)
#define SYSTEM_TUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1DD996B0)

namespace System
{
	inline static constexpr unsigned int Tuple_TypeDefinitionIndex = 142;

	class Tuple : public ::System::Object
	{
	public:
		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CombineHashCodes_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CombineHashCodes_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 CombineHashCodes_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 CombineHashCodes_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 CombineHashCodes_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE_COMBINEHASHCODES_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
}
