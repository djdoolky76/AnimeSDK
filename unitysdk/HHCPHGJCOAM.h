#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HHCPHGJCOAM_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1494B2B0)
#define HHCPHGJCOAM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1494B240)
#define HHCPHGJCOAM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1494B1B0)
#define HHCPHGJCOAM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1494B480)
#define HHCPHGJCOAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1494B3E0)

inline static constexpr unsigned int HHCPHGJCOAM_TypeDefinitionIndex = 83177;

class HHCPHGJCOAM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* NFLNCNAOLJJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCPHGJCOAM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCPHGJCOAM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHCPHGJCOAM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHCPHGJCOAM_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCPHGJCOAM_GDEOPIBNOIN_OFFSET))(this);
	}
};
