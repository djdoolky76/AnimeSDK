#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ANLBKGJIFGK_FCJCBBELKLD_OFFSET UNITYSDK_OFFSET(0x3CE9E0)

inline static constexpr unsigned int ANLBKGJIFGK_TypeDefinitionIndex = 85579;

struct alignas(4) ANLBKGJIFGK
{
	::System::Int32 FAEGNLBDHJE; // 0x10
	::System::Int32 EDKOOIOFBGF; // 0x14

	::System::Int32 FCJCBBELKLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLBKGJIFGK_FCJCBBELKLD_OFFSET))(this);
	}
};
