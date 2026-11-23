#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

class F73915858766313E;

#define F3B46386798DAFDA_B5F1EBF5EFE1CA46_OFFSET UNITYSDK_OFFSET(0x1651350)
#define F3B46386798DAFDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F3B46386798DAFDA_TypeDefinitionIndex = 13;

class F3B46386798DAFDA : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3B46386798DAFDA__CTOR_OFFSET))(this);
	}

	::F73915858766313E* B5F1EBF5EFE1CA46()
	{
		return ((::F73915858766313E*(*)(::PVOID))((::PBYTE)hIl2Cpp + F3B46386798DAFDA_B5F1EBF5EFE1CA46_OFFSET))(this);
	}
};
