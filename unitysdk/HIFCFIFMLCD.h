#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AKKDGABKFGP;

#define HIFCFIFMLCD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7B0F10)

inline static constexpr unsigned int HIFCFIFMLCD_TypeDefinitionIndex = 44690;

struct alignas(8) HIFCFIFMLCD
{
	::AKKDGABKFGP* KGONNDCPJGB; // 0x10
	::AKKDGABKFGP* AOGLLOEBIGE; // 0x18

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCFIFMLCD_NPOLNFDBOOD_OFFSET))(this);
	}
};
