#pragma once
#include "unitysdk/unitysdk.h"

#define SYSTEM_NUINT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define SYSTEM_NUINT_CTOR_OFFSET UNITYSDK_OFFSET(0x3F72D00)
#define SYSTEM_NUINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x20785850)
#define SYSTEM_NUINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x20785840)
#define SYSTEM_NUINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x20785860)

namespace System
{
	inline static constexpr unsigned int NUInt_TypeDefinitionIndex = 4975;

	struct alignas(8) NUInt
	{
		::PVOID _value; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_CTOR_1_OFFSET))(this, a1);
		}

		/*
		static ::System::NUInt op_Explicit(::System::Int32 a1)
		{
			return ((::System::NUInt(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::PVOID op_Explicit_1(::System::NUInt a1)
		{
			return ((::PVOID(*)(::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_OP_EXPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::NUInt op_Multiply(::System::NUInt a1, ::System::NUInt a2)
		{
			return ((::System::NUInt(*)(::System::NUInt, ::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_NUINT_OP_MULTIPLY_OFFSET))(a1, a2);
		}
		*/

	};
}
