#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

class F73915858766313E;

#define E4DEB55BB590C894_B5F1EBF5EFE1CA46_OFFSET UNITYSDK_OFFSET(0x24FDB00)
#define E4DEB55BB590C894__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E4DEB55BB590C894_TypeDefinitionIndex = 5174;

class E4DEB55BB590C894 : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4DEB55BB590C894__CTOR_OFFSET))(this);
	}

	::F73915858766313E* B5F1EBF5EFE1CA46()
	{
		return ((::F73915858766313E*(*)(::PVOID))((::PBYTE)hIl2Cpp + E4DEB55BB590C894_B5F1EBF5EFE1CA46_OFFSET))(this);
	}
};
