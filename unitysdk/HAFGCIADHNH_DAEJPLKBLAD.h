#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HAFGCIADHNH_DAEJPLKBLAD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x65FFB0)

inline static constexpr unsigned int HAFGCIADHNH_DAEJPLKBLAD_TypeDefinitionIndex = 76833;

struct alignas(4) HAFGCIADHNH_DAEJPLKBLAD
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAFGCIADHNH_DAEJPLKBLAD_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
