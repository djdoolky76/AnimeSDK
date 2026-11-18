#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGHMHALNMC_LOKNLGOELCF.h"
#include "unitysdk/GBNLAFDKEOH.h"

class HJGOAJHNEGC;

#define BHGHMHALNMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1691A260)
#define BHGHMHALNMC_NOLNLGKADNH_OFFSET UNITYSDK_OFFSET(0x1691A520)
#define BHGHMHALNMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1691A240)

inline static constexpr unsigned int BHGHMHALNMC_TypeDefinitionIndex = 43148;

class BHGHMHALNMC : public ::GBNLAFDKEOH
{
public:
	::System::Boolean OECHNBLPKLB; // 0x28
	::System::Boolean LJEDNCCGPEB; // 0x29
	::System::Byte _padding0[0x2];
	::BHGHMHALNMC_LOKNLGOELCF GBKJKABNGFC; // 0x2C

	::System::Void _ctor(::HJGOAJHNEGC* ALLCJOCNFLI, ::System::Boolean LJEDNCCGPEB, ::BHGHMHALNMC_LOKNLGOELCF GBKJKABNGFC, ::System::Boolean OECHNBLPKLB)
	{
		return ((::System::Void(*)(::PVOID, ::HJGOAJHNEGC*, ::System::Boolean, ::BHGHMHALNMC_LOKNLGOELCF, ::System::Boolean))((::PBYTE)hIl2Cpp + BHGHMHALNMC__CTOR_OFFSET))(this, ALLCJOCNFLI, LJEDNCCGPEB, GBKJKABNGFC, OECHNBLPKLB);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGHMHALNMC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void NOLNLGKADNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGHMHALNMC_NOLNLGKADNH_OFFSET))(this);
	}
};
