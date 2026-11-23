#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define A6046EFADF4324A1_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3B5A470)
#define A6046EFADF4324A1_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3C31550)

inline static constexpr unsigned int A6046EFADF4324A1_TypeDefinitionIndex = 11491;

struct alignas(4) A6046EFADF4324A1
{
	::System::IntPtr E937D4885DAA1AE8; // 0x10

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A6046EFADF4324A1_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A6046EFADF4324A1_B996A70283B60FAC_OFFSET))(this);
	}
};
