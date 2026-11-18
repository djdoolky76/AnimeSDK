#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFCKKOKHCDO.h"
#include "unitysdk/OIIFBDEJKLJ.h"

namespace MoleMole::Battle { class Entity; }

#define FBICIOFFGBM_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x161742E0)
#define FBICIOFFGBM_LHOLDNNELEH_OFFSET UNITYSDK_OFFSET(0x16174370)
#define FBICIOFFGBM_LNMACHICOLK_OFFSET UNITYSDK_OFFSET(0x16174360)
#define FBICIOFFGBM__CTOR_OFFSET UNITYSDK_OFFSET(0x161742D0)

inline static constexpr unsigned int FBICIOFFGBM_TypeDefinitionIndex = 71181;

class FBICIOFFGBM : public ::NFCKKOKHCDO
{
public:
	::OIIFBDEJKLJ GJDFBFPGIFO; // 0x18
	::System::Boolean _OOCHKGOFBAM_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBICIOFFGBM__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* IBNCFMCGHFC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBICIOFFGBM_IBNCFMCGHFC_OFFSET))(this);
	}

	::System::Void LNMACHICOLK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBICIOFFGBM_LNMACHICOLK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LHOLDNNELEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBICIOFFGBM_LHOLDNNELEH_OFFSET))(this);
	}
};
