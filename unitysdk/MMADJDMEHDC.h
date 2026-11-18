#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MMADJDMEHDC__CTOR_OFFSET UNITYSDK_OFFSET(0x358800)

inline static constexpr unsigned int MMADJDMEHDC_TypeDefinitionIndex = 28820;

struct alignas(4) MMADJDMEHDC
{
	::System::Single CJLKFOGFONE; // 0x10

	::System::Void _ctor(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMADJDMEHDC__CTOR_OFFSET))(this, MDPPNMIPDMP);
	}
};
