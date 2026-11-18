#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"

#define CIMNGHLDNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1154E9E0)

inline static constexpr unsigned int CIMNGHLDNAL_TypeDefinitionIndex = 51795;

class CIMNGHLDNAL : public ::LFDDLEHKGIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMNGHLDNAL__CTOR_OFFSET))(this);
	}
};
