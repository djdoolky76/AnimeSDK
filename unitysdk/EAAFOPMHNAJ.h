#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define EAAFOPMHNAJ_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x17218B20)
#define EAAFOPMHNAJ_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x17218C40)
#define EAAFOPMHNAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17218BD0)

inline static constexpr unsigned int EAAFOPMHNAJ_TypeDefinitionIndex = 92978;

class EAAFOPMHNAJ : public ::PKMJPMFCNBK
{
public:
	::MoleMole::CharacterCameraDitheringData BHCDIFFHIMM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAFOPMHNAJ__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAFOPMHNAJ_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAFOPMHNAJ_KHJELIBOECB_OFFSET))(this);
	}
};
