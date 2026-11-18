#pragma once
#include "unitysdk/unitysdk.h"

#define NKLMFIGCIPL__CTOR_OFFSET UNITYSDK_OFFSET(0x17299C20)

inline static constexpr unsigned int NKLMFIGCIPL_TypeDefinitionIndex = 62286;

class NKLMFIGCIPL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLMFIGCIPL__CTOR_OFFSET))(this);
	}
};
