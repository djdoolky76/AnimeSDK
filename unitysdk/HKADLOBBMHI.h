#pragma once
#include "unitysdk/unitysdk.h"

#define HKADLOBBMHI__CTOR_OFFSET UNITYSDK_OFFSET(0x14952E60)

inline static constexpr unsigned int HKADLOBBMHI_TypeDefinitionIndex = 56594;

class HKADLOBBMHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKADLOBBMHI__CTOR_OFFSET))(this);
	}
};
