#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HADLNOGNKCB.h"

#define BHHIFDCPOIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1691AFE0)

inline static constexpr unsigned int BHHIFDCPOIP_TypeDefinitionIndex = 39522;

class BHHIFDCPOIP : public ::HADLNOGNKCB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHIFDCPOIP__CTOR_OFFSET))(this);
	}
};
