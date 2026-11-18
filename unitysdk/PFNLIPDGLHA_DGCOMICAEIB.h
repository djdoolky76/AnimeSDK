#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PFNLIPDGLHA_DGCOMICAEIB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6A3420)

inline static constexpr unsigned int PFNLIPDGLHA_DGCOMICAEIB_TypeDefinitionIndex = 85188;

struct alignas(4) PFNLIPDGLHA_DGCOMICAEIB
{
	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNLIPDGLHA_DGCOMICAEIB_EXECUTE_OFFSET))(this);
	}
};
