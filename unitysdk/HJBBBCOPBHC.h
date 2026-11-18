#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBIIMMMKDDL.h"

#define HJBBBCOPBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D30550)

inline static constexpr unsigned int HJBBBCOPBHC_TypeDefinitionIndex = 79245;

class HJBBBCOPBHC
{
public:
	::FBIIMMMKDDL IAFHBCHLBME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBBBCOPBHC__CTOR_OFFSET))(this);
	}
};
