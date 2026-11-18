#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNFMDKIFKLA.h"
#include "unitysdk/NFEKDKBIBFG_BBAICAHNGLC.h"
#include "unitysdk/System/Object.h"

class BCIFJKNGJEA;

#define NFEKDKBIBFG_APFDHOBJNOE_OFFSET UNITYSDK_OFFSET(0x17280800)
#define NFEKDKBIBFG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x172805D0)
#define NFEKDKBIBFG_CCHGHNIPILG_OFFSET UNITYSDK_OFFSET(0x17280670)
#define NFEKDKBIBFG_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x17280850)
#define NFEKDKBIBFG_KKJLGIAEAAA_OFFSET UNITYSDK_OFFSET(0x172808F0)
#define NFEKDKBIBFG_NIJPMIHNGGM_OFFSET UNITYSDK_OFFSET(0x172805C0)
#define NFEKDKBIBFG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x172808A0)
#define NFEKDKBIBFG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x17280780)
#define NFEKDKBIBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x172805B0)

inline static constexpr unsigned int NFEKDKBIBFG_TypeDefinitionIndex = 56984;

class NFEKDKBIBFG : public ::System::Object
{
public:
	::System::Single GOIOLPLNLNI; // 0x10
	::LNFMDKIFKLA BKNALLCBDMB; // 0x14
	::NFEKDKBIBFG_BBAICAHNGLC LCNKFFOMOHN; // 0x18
	::System::Single MDPPNMIPDMP; // 0x1C
	::System::Single HACJFKBLODH; // 0x20
	::System::UInt32 GBIEHLHBKLG; // 0x24
	::System::Int32 LHDHLAEPFBH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKDKBIBFG__CTOR_OFFSET))(this);
	}

	::LNFMDKIFKLA NIJPMIHNGGM()
	{
		return ((::LNFMDKIFKLA(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_NIJPMIHNGGM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 OBNIAHNMHPF, ::System::Int32 LHDHLAEPFBH, ::System::Single MDPPNMIPDMP, ::System::Single GOIOLPLNLNI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_BBOMJDBNHIC_OFFSET))(this, OBNIAHNMHPF, LHDHLAEPFBH, MDPPNMIPDMP, GOIOLPLNLNI);
	}

	::System::Boolean CCHGHNIPILG(::BCIFJKNGJEA* ECKMPOAABAL)
	{
		return ((::System::Boolean(*)(::PVOID, ::BCIFJKNGJEA*))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_CCHGHNIPILG_OFFSET))(this, ECKMPOAABAL);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Boolean APFDHOBJNOE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_APFDHOBJNOE_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean KKJLGIAEAAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKDKBIBFG_KKJLGIAEAAA_OFFSET))(this);
	}
};
