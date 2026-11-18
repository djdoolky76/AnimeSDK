#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCCLKPLEOLC.h"
#include "unitysdk/System/Attribute.h"

#define FBOOEMBGCIF_GPHDHPOFHAB_OFFSET UNITYSDK_OFFSET(0x14ABAD70)
#define FBOOEMBGCIF__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABAD60)

inline static constexpr unsigned int FBOOEMBGCIF_TypeDefinitionIndex = 44250;

class FBOOEMBGCIF : public ::System::Attribute
{
public:
	::DCCLKPLEOLC LHCBCLICEMA; // 0x10

	::System::Void _ctor(::DCCLKPLEOLC LHCBCLICEMA)
	{
		return ((::System::Void(*)(::PVOID, ::DCCLKPLEOLC))((::PBYTE)hIl2Cpp + FBOOEMBGCIF__CTOR_OFFSET))(this, LHCBCLICEMA);
	}

	::DCCLKPLEOLC GPHDHPOFHAB()
	{
		return ((::DCCLKPLEOLC(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOOEMBGCIF_GPHDHPOFHAB_OFFSET))(this);
	}
};
