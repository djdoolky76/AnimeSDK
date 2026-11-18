#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class LNFHNFGLPCD;

#define PLPEABNJHAL_OIOCDLMKFHN_OFFSET UNITYSDK_OFFSET(0x1CB51900)

inline static constexpr unsigned int PLPEABNJHAL_TypeDefinitionIndex = 71538;

struct alignas(4) PLPEABNJHAL
{
	static ::LNFHNFGLPCD* OIOCDLMKFHN()
	{
		return ((::LNFHNFGLPCD*(*)())((::PBYTE)hIl2Cpp + PLPEABNJHAL_OIOCDLMKFHN_OFFSET))();
	}
};
