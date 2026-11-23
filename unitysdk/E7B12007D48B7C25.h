#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7CD16AAF1D69B1F.h"
#include "unitysdk/A4E9EFADAA3978D2.h"

#define E7B12007D48B7C25_E63A9D2B5460CE29_OFFSET UNITYSDK_OFFSET(0x1DD6720)
#define E7B12007D48B7C25__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E7B12007D48B7C25_TypeDefinitionIndex = 9360;

class E7B12007D48B7C25 : public ::E7CD16AAF1D69B1F
{
public:
	::A4E9EFADAA3978D2 E63A9D2B5460CE29()
	{
		return ((::A4E9EFADAA3978D2(*)(::PVOID))((::PBYTE)hIl2Cpp + E7B12007D48B7C25_E63A9D2B5460CE29_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7B12007D48B7C25__CTOR_OFFSET))(this);
	}
};
