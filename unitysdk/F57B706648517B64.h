#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define F57B706648517B64_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3B5A470)
#define F57B706648517B64_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3D608F0)

inline static constexpr unsigned int F57B706648517B64_TypeDefinitionIndex = 11006;

struct alignas(4) F57B706648517B64
{
	::System::IntPtr E937D4885DAA1AE8; // 0x10

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F57B706648517B64_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F57B706648517B64_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}
};
