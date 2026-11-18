#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define GHMHNAEMCLN_CNEKIGGJJBC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x654660)

inline static constexpr unsigned int GHMHNAEMCLN_CNEKIGGJJBC_TypeDefinitionIndex = 40747;

struct alignas(4) GHMHNAEMCLN_CNEKIGGJJBC
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHMHNAEMCLN_CNEKIGGJJBC_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
