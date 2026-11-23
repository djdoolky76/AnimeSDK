#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFAFBF45E71C42EB.h"
#include "unitysdk/A4E9EFADAA3978D2.h"

#define E9AF344BF89D6238_E63A9D2B5460CE29_OFFSET UNITYSDK_OFFSET(0x1E2EFE0)
#define E9AF344BF89D6238__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E9AF344BF89D6238_TypeDefinitionIndex = 9472;

class E9AF344BF89D6238 : public ::EFAFBF45E71C42EB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9AF344BF89D6238__CTOR_OFFSET))(this);
	}

	::A4E9EFADAA3978D2 E63A9D2B5460CE29()
	{
		return ((::A4E9EFADAA3978D2(*)(::PVOID))((::PBYTE)hIl2Cpp + E9AF344BF89D6238_E63A9D2B5460CE29_OFFSET))(this);
	}
};
