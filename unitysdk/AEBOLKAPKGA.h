#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System { class String; }

#define AEBOLKAPKGA_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11B8F480)
#define AEBOLKAPKGA_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x11B8F590)
#define AEBOLKAPKGA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8F520)

inline static constexpr unsigned int AEBOLKAPKGA_TypeDefinitionIndex = 40371;

class AEBOLKAPKGA : public ::PKMJPMFCNBK
{
public:
	::System::String* CEOKEMOKMLJ; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBOLKAPKGA__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBOLKAPKGA_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBOLKAPKGA_KHJELIBOECB_OFFSET))(this);
	}
};
