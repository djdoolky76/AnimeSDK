#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define CBEDDBALMPH_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14C75AD0)
#define CBEDDBALMPH_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x14C75BD0)
#define CBEDDBALMPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14C75B60)

inline static constexpr unsigned int CBEDDBALMPH_TypeDefinitionIndex = 43389;

class CBEDDBALMPH : public ::PKMJPMFCNBK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEDDBALMPH__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEDDBALMPH_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEDDBALMPH_KHJELIBOECB_OFFSET))(this);
	}
};
