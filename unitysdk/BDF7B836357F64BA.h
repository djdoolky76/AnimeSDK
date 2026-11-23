#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

class F73915858766313E;

#define BDF7B836357F64BA_B5F1EBF5EFE1CA46_OFFSET UNITYSDK_OFFSET(0x2450130)
#define BDF7B836357F64BA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BDF7B836357F64BA_TypeDefinitionIndex = 2500;

class BDF7B836357F64BA : public ::E2BEC5FD40067593
{
public:
	::F73915858766313E* B5F1EBF5EFE1CA46()
	{
		return ((::F73915858766313E*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDF7B836357F64BA_B5F1EBF5EFE1CA46_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDF7B836357F64BA__CTOR_OFFSET))(this);
	}
};
