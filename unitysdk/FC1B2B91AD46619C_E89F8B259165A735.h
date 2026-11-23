#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCC2F8EABCD6F945.h"
#include "unitysdk/System/ValueType.h"

#define FC1B2B91AD46619C_E89F8B259165A735__CTOR_OFFSET UNITYSDK_OFFSET(0x4410AF0)

inline static constexpr unsigned int FC1B2B91AD46619C_E89F8B259165A735_TypeDefinitionIndex = 21141;

struct alignas(8) FC1B2B91AD46619C_E89F8B259165A735
{
	::System::Int32 F15DED49F43372B1; // 0x10
	::System::Byte _padding0[0x4];
	::FCC2F8EABCD6F945<::System::Char> BAD9BA673B73A720; // 0x18
	::System::Byte _padding1[0x8];
	::System::Int32 E7A063ECC75D7951; // 0x28
	::System::Int32 EDF7CA62AF273381; // 0x2C

	::System::Void _ctor(::System::Int32 B48C66E5FB2449C6, ::FCC2F8EABCD6F945<::System::Char> A30706FCE5AF29B5, ::System::Int32 F4A2470106FCCC74, ::System::Int32 A673BB3AB6BABF53)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FCC2F8EABCD6F945<::System::Char>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FC1B2B91AD46619C_E89F8B259165A735__CTOR_OFFSET))(this, B48C66E5FB2449C6, A30706FCE5AF29B5, F4A2470106FCCC74, A673BB3AB6BABF53);
	}
};
