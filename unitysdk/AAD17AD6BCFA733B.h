#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

class F73915858766313E;

#define AAD17AD6BCFA733B_B5F1EBF5EFE1CA46_OFFSET UNITYSDK_OFFSET(0x17C5880)
#define AAD17AD6BCFA733B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AAD17AD6BCFA733B_TypeDefinitionIndex = 969;

class AAD17AD6BCFA733B : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAD17AD6BCFA733B__CTOR_OFFSET))(this);
	}

	::F73915858766313E* B5F1EBF5EFE1CA46()
	{
		return ((::F73915858766313E*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAD17AD6BCFA733B_B5F1EBF5EFE1CA46_OFFSET))(this);
	}
};
