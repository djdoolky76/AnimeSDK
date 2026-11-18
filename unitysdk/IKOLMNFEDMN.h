#pragma once
#include "unitysdk/unitysdk.h"

#define IKOLMNFEDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15C17530)

inline static constexpr unsigned int IKOLMNFEDMN_TypeDefinitionIndex = 86152;

class IKOLMNFEDMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOLMNFEDMN__CTOR_OFFSET))(this);
	}
};
