#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define LNNFMENANAG_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x13D08930)
#define LNNFMENANAG_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x13D08A40)
#define LNNFMENANAG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D089D0)

inline static constexpr unsigned int LNNFMENANAG_TypeDefinitionIndex = 64863;

class LNNFMENANAG : public ::PKMJPMFCNBK
{
public:
	::MoleMole::Config::CameraDelayMoveMode FLIBOKNMPFE; // 0x80
	::System::Boolean BMJCIEEMEJH; // 0x84
	::System::Byte _padding0[0x3];
	::System::Single NFKAEIJMNML; // 0x88
	::System::Int32 FICNMDFGKCM; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNFMENANAG__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNFMENANAG_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNFMENANAG_KHJELIBOECB_OFFSET))(this);
	}
};
