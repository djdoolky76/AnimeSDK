#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AICAAIODMKO__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA0990)

inline static constexpr unsigned int AICAAIODMKO_TypeDefinitionIndex = 84530;

class AICAAIODMKO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICAAIODMKO__CTOR_OFFSET))(this);
	}
};
