#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

class AIKGHHJKNCE;

#define KGHCIIEEELH_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x13C5CCD0)
#define KGHCIIEEELH_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x13C5CD50)
#define KGHCIIEEELH_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x13C5CDF0)
#define KGHCIIEEELH_MDHPPJGDMBC_OFFSET UNITYSDK_OFFSET(0x13C5CEF0)
#define KGHCIIEEELH__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5CC80)

inline static constexpr unsigned int KGHCIIEEELH_TypeDefinitionIndex = 86114;

class KGHCIIEEELH : public ::GIPCMLEONLI
{
public:
	::AIKGHHJKNCE* DKGEMJELJKG; // 0x40

	::System::Void _ctor(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + KGHCIIEEELH__CTOR_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGHCIIEEELH_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHCIIEEELH_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHCIIEEELH_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void MDHPPJGDMBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHCIIEEELH_MDHPPJGDMBC_OFFSET))(this);
	}
};
