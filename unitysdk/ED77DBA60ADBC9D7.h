#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define ED77DBA60ADBC9D7_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x2544360)
#define ED77DBA60ADBC9D7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ED77DBA60ADBC9D7_TypeDefinitionIndex = 5398;

class ED77DBA60ADBC9D7 : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED77DBA60ADBC9D7__CTOR_OFFSET))(this);
	}

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED77DBA60ADBC9D7_A00773F95A03D4B7_OFFSET))(this);
	}
};
