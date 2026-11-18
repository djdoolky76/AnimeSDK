#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/LFEIKDIFMDI.h"

#define NCCPPLBKCFM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13ED20D0)
#define NCCPPLBKCFM_FCIIMDBLMCC_OFFSET UNITYSDK_OFFSET(0x13ED20B0)
#define NCCPPLBKCFM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13ED2020)
#define NCCPPLBKCFM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13ED1F90)
#define NCCPPLBKCFM_OIDCGNEHPHB_OFFSET UNITYSDK_OFFSET(0x13ED20C0)
#define NCCPPLBKCFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ED1F10)
#define NCCPPLBKCFM__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED1F80)

inline static constexpr unsigned int NCCPPLBKCFM_TypeDefinitionIndex = 72516;

class NCCPPLBKCFM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA8; // 0x0
	::LFEIKDIFMDI _MOALHDDDJDE_k__BackingField; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCCPPLBKCFM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCPPLBKCFM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCPPLBKCFM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCPPLBKCFM_FIGPAOKNJLN_OFFSET))(this);
	}

	::LFEIKDIFMDI FCIIMDBLMCC()
	{
		return ((::LFEIKDIFMDI(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCPPLBKCFM_FCIIMDBLMCC_OFFSET))(this);
	}

	::System::Void OIDCGNEHPHB(::LFEIKDIFMDI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LFEIKDIFMDI))((::PBYTE)hIl2Cpp + NCCPPLBKCFM_OIDCGNEHPHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::LFEIKDIFMDI FPLGBEJEODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LFEIKDIFMDI))((::PBYTE)hIl2Cpp + NCCPPLBKCFM_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, FPLGBEJEODH);
	}
};
