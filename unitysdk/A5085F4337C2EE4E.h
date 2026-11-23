#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define A5085F4337C2EE4E_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x1E7E150)
#define A5085F4337C2EE4E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A5085F4337C2EE4E_TypeDefinitionIndex = 9592;

class A5085F4337C2EE4E : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5085F4337C2EE4E__CTOR_OFFSET))(this);
	}

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5085F4337C2EE4E_A00773F95A03D4B7_OFFSET))(this);
	}
};
