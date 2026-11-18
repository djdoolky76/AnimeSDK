#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBNLAFDKEOH.h"

class HJGOAJHNEGC;

#define AIIBNDCIKON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x11BA1270)
#define AIIBNDCIKON_NOLNLGKADNH_OFFSET UNITYSDK_OFFSET(0x11BA1780)
#define AIIBNDCIKON__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA1250)

inline static constexpr unsigned int AIIBNDCIKON_TypeDefinitionIndex = 48127;

class AIIBNDCIKON : public ::GBNLAFDKEOH
{
public:
	::System::Int32 IKEMGLJOMAA; // 0x28
	::System::Boolean OECHNBLPKLB; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 ABHBKFJKINO; // 0x30

	::System::Void _ctor(::HJGOAJHNEGC* ALLCJOCNFLI, ::System::Boolean OECHNBLPKLB, ::System::Int32 NCFGGFGCCKO, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::HJGOAJHNEGC*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AIIBNDCIKON__CTOR_OFFSET))(this, ALLCJOCNFLI, OECHNBLPKLB, NCFGGFGCCKO, HBJOLKHGGDD);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIBNDCIKON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void NOLNLGKADNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIBNDCIKON_NOLNLGKADNH_OFFSET))(this);
	}
};
