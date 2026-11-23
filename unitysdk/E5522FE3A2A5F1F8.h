#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define E5522FE3A2A5F1F8_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x166BBB0)
#define E5522FE3A2A5F1F8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E5522FE3A2A5F1F8_TypeDefinitionIndex = 70;

class E5522FE3A2A5F1F8 : public ::E2BEC5FD40067593
{
public:
	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5522FE3A2A5F1F8_A00773F95A03D4B7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5522FE3A2A5F1F8__CTOR_OFFSET))(this);
	}
};
