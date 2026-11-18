#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EKFNEOMLOFO_DDLBNAIAPBM_OFFSET UNITYSDK_OFFSET(0x725680)

inline static constexpr unsigned int EKFNEOMLOFO_TypeDefinitionIndex = 52201;

struct alignas(4) EKFNEOMLOFO
{
	::System::Int32 BIJIPJPJJPJ; // 0x10

	::System::Int32 DDLBNAIAPBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFNEOMLOFO_DDLBNAIAPBM_OFFSET))(this);
	}
};
