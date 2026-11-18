#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AILPFBBNLEC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7275A0)

inline static constexpr unsigned int AILPFBBNLEC_TypeDefinitionIndex = 78723;

struct alignas(4) AILPFBBNLEC
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AILPFBBNLEC_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
