#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class String; }

#define JFHJHDKGMOF_BEALKENMJIP_OFFSET UNITYSDK_OFFSET(0x198A8E80)
#define JFHJHDKGMOF_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x198A8FE0)
#define JFHJHDKGMOF_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x198A9030)
#define JFHJHDKGMOF_JDAACBFOFCD_OFFSET UNITYSDK_OFFSET(0x198A8E40)
#define JFHJHDKGMOF_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x198A90D0)
#define JFHJHDKGMOF_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x198A91F0)
#define JFHJHDKGMOF__CTOR_OFFSET UNITYSDK_OFFSET(0x198A8E20)

inline static constexpr unsigned int JFHJHDKGMOF_TypeDefinitionIndex = 75311;

class JFHJHDKGMOF : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	::System::String* HHGLDOKNPCK; // 0x28
	::System::Single NHBLEHKOFNB; // 0x30
	::MoleMole::Config::ValueCompareType EECEKEPKHCC; // 0x34

	::System::Void _ctor(::System::String* KGLMFAMCOHO, ::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::Single NAFJONIAJKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ValueCompareType, ::System::Single))((::PBYTE)hIl2Cpp + JFHJHDKGMOF__CTOR_OFFSET))(this, KGLMFAMCOHO, FAMMCEJDLFE, NAFJONIAJKA);
	}

	::System::Boolean JDAACBFOFCD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHJHDKGMOF_JDAACBFOFCD_OFFSET))(this);
	}

	::System::Void BEALKENMJIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHJHDKGMOF_BEALKENMJIP_OFFSET))(this);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHJHDKGMOF_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHJHDKGMOF_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHJHDKGMOF_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHJHDKGMOF_KJOHEMDIHNJ_OFFSET))(this);
	}
};
