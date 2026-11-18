#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define AHBGJMDNEEM__CTOR_OFFSET UNITYSDK_OFFSET(0x142128A0)

inline static constexpr unsigned int AHBGJMDNEEM_TypeDefinitionIndex = 85415;

class AHBGJMDNEEM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBGJMDNEEM__CTOR_OFFSET))(this);
	}
};
