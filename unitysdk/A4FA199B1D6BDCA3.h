#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define A4FA199B1D6BDCA3_ECBA3479EAD9D18E_OFFSET UNITYSDK_OFFSET(0x1EA3870)
#define A4FA199B1D6BDCA3_FEFD5298862EC8D2_OFFSET UNITYSDK_OFFSET(0x1EA3770)

inline static constexpr unsigned int A4FA199B1D6BDCA3_TypeDefinitionIndex = 6693;

struct alignas(4) A4FA199B1D6BDCA3
{
	::System::Single E73BD6D735D8BD5F; // 0x10
	::System::Single FEAFA7071D112910; // 0x14
	::System::Single A1B47C3EB6D6C1DA; // 0x18
	::System::Single BB73D6E247634F5A; // 0x1C
	::System::Single F0D4460893BE123E; // 0x20

	::System::Single FEFD5298862EC8D2(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4FA199B1D6BDCA3_FEFD5298862EC8D2_OFFSET))(this, B48C66E5FB2449C6);
	}

	::System::Void ECBA3479EAD9D18E(::System::Int32 B48C66E5FB2449C6, ::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + A4FA199B1D6BDCA3_ECBA3479EAD9D18E_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8);
	}
};
