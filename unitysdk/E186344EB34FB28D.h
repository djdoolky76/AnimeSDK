#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7CD16AAF1D69B1F.h"
#include "unitysdk/A4E9EFADAA3978D2.h"

#define E186344EB34FB28D_E63A9D2B5460CE29_OFFSET UNITYSDK_OFFSET(0x1C4DC30)
#define E186344EB34FB28D__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E186344EB34FB28D_TypeDefinitionIndex = 9303;

class E186344EB34FB28D : public ::E7CD16AAF1D69B1F
{
public:
	::A4E9EFADAA3978D2 E63A9D2B5460CE29()
	{
		return ((::A4E9EFADAA3978D2(*)(::PVOID))((::PBYTE)hIl2Cpp + E186344EB34FB28D_E63A9D2B5460CE29_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E186344EB34FB28D__CTOR_OFFSET))(this);
	}
};
