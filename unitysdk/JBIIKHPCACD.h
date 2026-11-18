#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class String; }

#define JBIIKHPCACD_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x197F9620)
#define JBIIKHPCACD_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x197F9960)
#define JBIIKHPCACD_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x197F9A90)
#define JBIIKHPCACD_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x197F9A00)
#define JBIIKHPCACD_LJDBEMACCNO_OFFSET UNITYSDK_OFFSET(0x197F9690)
#define JBIIKHPCACD__CTOR_OFFSET UNITYSDK_OFFSET(0x197F9600)

inline static constexpr unsigned int JBIIKHPCACD_TypeDefinitionIndex = 49426;

class JBIIKHPCACD : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	::System::String* OINCIABOOLC; // 0x28
	::System::Int32 NHBLEHKOFNB; // 0x30
	::MoleMole::Config::ValueCompareType EECEKEPKHCC; // 0x34

	::System::Void _ctor(::System::String* CPDGLJJGJDL, ::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::Int32 NAFJONIAJKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ValueCompareType, ::System::Int32))((::PBYTE)hIl2Cpp + JBIIKHPCACD__CTOR_OFFSET))(this, CPDGLJJGJDL, FAMMCEJDLFE, NAFJONIAJKA);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIIKHPCACD_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIIKHPCACD_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIIKHPCACD_KJOHEMDIHNJ_OFFSET))(this);
	}

	::System::Boolean LJDBEMACCNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIIKHPCACD_LJDBEMACCNO_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIIKHPCACD_JFNIMFIBFHA_OFFSET))(this);
	}
};
