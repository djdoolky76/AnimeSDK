#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LPLCFKMOFEG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7BFDF0)

inline static constexpr unsigned int LPLCFKMOFEG_TypeDefinitionIndex = 58343;

struct alignas(4) LPLCFKMOFEG
{
	::System::Void Execute(::System::Int32 GNJFFLJGNCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPLCFKMOFEG_EXECUTE_OFFSET))(this, GNJFFLJGNCC);
	}
};
