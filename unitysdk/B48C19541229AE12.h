#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define B48C19541229AE12_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x246EBB0)
#define B48C19541229AE12__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B48C19541229AE12_TypeDefinitionIndex = 4398;

class B48C19541229AE12 : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B48C19541229AE12__CTOR_OFFSET))(this);
	}

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B48C19541229AE12_A00773F95A03D4B7_OFFSET))(this);
	}
};
