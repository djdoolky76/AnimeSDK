#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define F4D61DF860711AFE_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x2095C00)

inline static constexpr unsigned int F4D61DF860711AFE_TypeDefinitionIndex = 8514;

struct alignas(4) F4D61DF860711AFE
{
	::System::IntPtr E0DF8AA6BB254C3D; // 0x10
	::System::Int32 E2B7EB4D8A351885; // 0x18
	::System::Int32 E495E73920E91E67; // 0x1C

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F4D61DF860711AFE_B996A70283B60FAC_OFFSET))(this);
	}
};
