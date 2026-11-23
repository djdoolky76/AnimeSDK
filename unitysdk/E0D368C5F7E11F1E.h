#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFAFBF45E71C42EB.h"
#include "unitysdk/A4E9EFADAA3978D2.h"

#define E0D368C5F7E11F1E_E63A9D2B5460CE29_OFFSET UNITYSDK_OFFSET(0x1D37840)
#define E0D368C5F7E11F1E__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E0D368C5F7E11F1E_TypeDefinitionIndex = 10049;

class E0D368C5F7E11F1E : public ::EFAFBF45E71C42EB
{
public:
	::A4E9EFADAA3978D2 E63A9D2B5460CE29()
	{
		return ((::A4E9EFADAA3978D2(*)(::PVOID))((::PBYTE)hIl2Cpp + E0D368C5F7E11F1E_E63A9D2B5460CE29_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0D368C5F7E11F1E__CTOR_OFFSET))(this);
	}
};
