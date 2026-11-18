#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class String; }

#define CMMBMHEBFFH_BEALKENMJIP_OFFSET UNITYSDK_OFFSET(0x145753D0)
#define CMMBMHEBFFH_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x145755C0)
#define CMMBMHEBFFH_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x14575610)
#define CMMBMHEBFFH_JDAACBFOFCD_OFFSET UNITYSDK_OFFSET(0x14575390)
#define CMMBMHEBFFH_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x145756B0)
#define CMMBMHEBFFH_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x145757D0)
#define CMMBMHEBFFH__CTOR_OFFSET UNITYSDK_OFFSET(0x14575370)

inline static constexpr unsigned int CMMBMHEBFFH_TypeDefinitionIndex = 50776;

class CMMBMHEBFFH : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	::System::String* JLGIIAJDLML; // 0x28
	::System::Single NHBLEHKOFNB; // 0x30
	::MoleMole::Config::ValueCompareType EECEKEPKHCC; // 0x34

	::System::Void _ctor(::System::String* INMFNMLOKFO, ::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::Single NAFJONIAJKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ValueCompareType, ::System::Single))((::PBYTE)hIl2Cpp + CMMBMHEBFFH__CTOR_OFFSET))(this, INMFNMLOKFO, FAMMCEJDLFE, NAFJONIAJKA);
	}

	::System::Boolean JDAACBFOFCD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBMHEBFFH_JDAACBFOFCD_OFFSET))(this);
	}

	::System::Void BEALKENMJIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBMHEBFFH_BEALKENMJIP_OFFSET))(this);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBMHEBFFH_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBMHEBFFH_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBMHEBFFH_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBMHEBFFH_KJOHEMDIHNJ_OFFSET))(this);
	}
};
