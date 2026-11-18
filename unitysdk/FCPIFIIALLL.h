#pragma once
#include "unitysdk/unitysdk.h"

#define FCPIFIIALLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11AC17D0)

inline static constexpr unsigned int FCPIFIIALLL_TypeDefinitionIndex = 81468;

class FCPIFIIALLL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPIFIIALLL__CTOR_OFFSET))(this);
	}
};
