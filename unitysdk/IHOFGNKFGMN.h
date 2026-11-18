#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECEOBOHAGOB.h"

#define IHOFGNKFGMN__CTOR_OFFSET UNITYSDK_OFFSET(0x16108F60)

inline static constexpr unsigned int IHOFGNKFGMN_TypeDefinitionIndex = 16291;

class IHOFGNKFGMN : public ::ECEOBOHAGOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFGNKFGMN__CTOR_OFFSET))(this);
	}
};
