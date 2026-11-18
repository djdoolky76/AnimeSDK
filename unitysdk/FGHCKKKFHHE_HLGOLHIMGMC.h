#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FGHCKKKFHHE_HLGOLHIMGMC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x700260)

inline static constexpr unsigned int FGHCKKKFHHE_HLGOLHIMGMC_TypeDefinitionIndex = 52120;

struct alignas(4) FGHCKKKFHHE_HLGOLHIMGMC
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_HLGOLHIMGMC_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
