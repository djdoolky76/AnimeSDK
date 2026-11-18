#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCHIDFKKNG.h"

class CAHKBCCICKA;

#define DFLACCDDNED_ALPGCEKFKOC_OFFSET UNITYSDK_OFFSET(0x1FCE2A20)
#define DFLACCDDNED_LJBEEMBDEMK_OFFSET UNITYSDK_OFFSET(0x1FCE1720)
#define DFLACCDDNED_OHHABJFGIHN_OFFSET UNITYSDK_OFFSET(0x1FCE26E0)
#define DFLACCDDNED__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE2A10)

inline static constexpr unsigned int DFLACCDDNED_TypeDefinitionIndex = 95358;

class DFLACCDDNED : public ::IDCHIDFKKNG
{
public:
	::System::Boolean LOCLCEPMPFE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLACCDDNED__CTOR_OFFSET))(this);
	}

	::System::Void LJBEEMBDEMK(::CAHKBCCICKA* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::CAHKBCCICKA*))((::PBYTE)hIl2Cpp + DFLACCDDNED_LJBEEMBDEMK_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void OHHABJFGIHN(::CAHKBCCICKA* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::CAHKBCCICKA*))((::PBYTE)hIl2Cpp + DFLACCDDNED_OHHABJFGIHN_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void ALPGCEKFKOC(::CAHKBCCICKA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CAHKBCCICKA*))((::PBYTE)hIl2Cpp + DFLACCDDNED_ALPGCEKFKOC_OFFSET))(this, MIALFKCCCPI);
	}
};
