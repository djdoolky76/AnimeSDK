#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class JOOHBDMHGCA;

#define PIEINLPODKC_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14B9DEE0)
#define PIEINLPODKC_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x14B9DFE0)
#define PIEINLPODKC__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9DF70)

inline static constexpr unsigned int PIEINLPODKC_TypeDefinitionIndex = 41900;

class PIEINLPODKC : public ::PKMJPMFCNBK
{
public:
	::JOOHBDMHGCA* JIMCAJNHMAG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIEINLPODKC__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIEINLPODKC_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIEINLPODKC_KHJELIBOECB_OFFSET))(this);
	}
};
