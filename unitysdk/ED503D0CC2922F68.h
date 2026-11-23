#pragma once
#include "unitysdk/unitysdk.h"

#define ED503D0CC2922F68_A2E32EEE42BFFD94_OFFSET UNITYSDK_OFFSET(0x269C570)
#define ED503D0CC2922F68_F3A8A98F932574AB_OFFSET UNITYSDK_OFFSET(0x269C460)
#define ED503D0CC2922F68__CTOR_OFFSET UNITYSDK_OFFSET(0x269C690)

inline static constexpr unsigned int ED503D0CC2922F68_TypeDefinitionIndex = 6554;

class ED503D0CC2922F68
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED503D0CC2922F68__CTOR_OFFSET))(this);
	}

	::System::Void A2E32EEE42BFFD94()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED503D0CC2922F68_A2E32EEE42BFFD94_OFFSET))(this);
	}

	::System::Void F3A8A98F932574AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED503D0CC2922F68_F3A8A98F932574AB_OFFSET))(this);
	}
};
