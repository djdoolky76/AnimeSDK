#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define HPJACKKLFDK_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x15393AD0)
#define HPJACKKLFDK_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x15393BF0)
#define HPJACKKLFDK__CTOR_OFFSET UNITYSDK_OFFSET(0x15393B70)

inline static constexpr unsigned int HPJACKKLFDK_TypeDefinitionIndex = 42937;

class HPJACKKLFDK : public ::PKMJPMFCNBK
{
public:
	::System::Int32 MJFBBHICFOH; // 0x80
	::System::Int32 PKHNKEIGFFB; // 0x84
	::System::Int32 HIDLGNOIENF; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJACKKLFDK__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJACKKLFDK_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJACKKLFDK_KHJELIBOECB_OFFSET))(this);
	}
};
