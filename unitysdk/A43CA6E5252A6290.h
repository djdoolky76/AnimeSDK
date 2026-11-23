#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define A43CA6E5252A6290_A49FF3EFBAE289F9_OFFSET UNITYSDK_OFFSET(0x171F6A0)

inline static constexpr unsigned int A43CA6E5252A6290_TypeDefinitionIndex = 676;

struct alignas(4) A43CA6E5252A6290
{
	::System::Single B665ECC71476D90F; // 0x10

	::System::Single A49FF3EFBAE289F9(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + A43CA6E5252A6290_A49FF3EFBAE289F9_OFFSET))(this, E937D4885DAA1AE8);
	}
};
