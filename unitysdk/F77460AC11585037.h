#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7CD16AAF1D69B1F.h"
#include "unitysdk/A4E9EFADAA3978D2.h"

#define F77460AC11585037_E63A9D2B5460CE29_OFFSET UNITYSDK_OFFSET(0x1E136D0)
#define F77460AC11585037__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int F77460AC11585037_TypeDefinitionIndex = 9443;

class F77460AC11585037 : public ::E7CD16AAF1D69B1F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F77460AC11585037__CTOR_OFFSET))(this);
	}

	::A4E9EFADAA3978D2 E63A9D2B5460CE29()
	{
		return ((::A4E9EFADAA3978D2(*)(::PVOID))((::PBYTE)hIl2Cpp + F77460AC11585037_E63A9D2B5460CE29_OFFSET))(this);
	}
};
