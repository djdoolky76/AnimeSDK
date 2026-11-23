#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define A09C62344F60D9FB_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x1921860)
#define A09C62344F60D9FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A09C62344F60D9FB_TypeDefinitionIndex = 1533;

class A09C62344F60D9FB : public ::E2BEC5FD40067593
{
public:
	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A09C62344F60D9FB_A00773F95A03D4B7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A09C62344F60D9FB__CTOR_OFFSET))(this);
	}
};
