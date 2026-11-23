#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFAFBF45E71C42EB.h"
#include "unitysdk/A4E9EFADAA3978D2.h"

#define EEE994AA097A4342_E63A9D2B5460CE29_OFFSET UNITYSDK_OFFSET(0x1D8BE60)
#define EEE994AA097A4342__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int EEE994AA097A4342_TypeDefinitionIndex = 10093;

class EEE994AA097A4342 : public ::EFAFBF45E71C42EB
{
public:
	::A4E9EFADAA3978D2 E63A9D2B5460CE29()
	{
		return ((::A4E9EFADAA3978D2(*)(::PVOID))((::PBYTE)hIl2Cpp + EEE994AA097A4342_E63A9D2B5460CE29_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEE994AA097A4342__CTOR_OFFSET))(this);
	}
};
