#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JLGEFIGMLIA_ADDGOICEINK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7CF510)

inline static constexpr unsigned int JLGEFIGMLIA_ADDGOICEINK_TypeDefinitionIndex = 52637;

struct alignas(4) JLGEFIGMLIA_ADDGOICEINK
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ADDGOICEINK_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
