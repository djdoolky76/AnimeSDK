#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define ED1A8F68B589C124_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x1E7CEA0)
#define ED1A8F68B589C124__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ED1A8F68B589C124_TypeDefinitionIndex = 9598;

class ED1A8F68B589C124 : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED1A8F68B589C124__CTOR_OFFSET))(this);
	}

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED1A8F68B589C124_A00773F95A03D4B7_OFFSET))(this);
	}
};
