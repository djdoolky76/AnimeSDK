#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define HICDLBOLHPE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x10112040)
#define HICDLBOLHPE_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x10112100)
#define HICDLBOLHPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10112090)

inline static constexpr unsigned int HICDLBOLHPE_TypeDefinitionIndex = 54549;

class HICDLBOLHPE : public ::PKMJPMFCNBK
{
public:
	::System::Int32 JINECLBAEHN; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICDLBOLHPE__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICDLBOLHPE_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICDLBOLHPE_KHJELIBOECB_OFFSET))(this);
	}
};
