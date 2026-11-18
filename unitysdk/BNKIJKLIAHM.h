#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define BNKIJKLIAHM_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x11521A00)
#define BNKIJKLIAHM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11521990)
#define BNKIJKLIAHM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11521940)
#define BNKIJKLIAHM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11521B00)
#define BNKIJKLIAHM__CTOR_OFFSET UNITYSDK_OFFSET(0x11521AF0)

inline static constexpr unsigned int BNKIJKLIAHM_TypeDefinitionIndex = 60604;

class BNKIJKLIAHM : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIJKLIAHM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIJKLIAHM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNKIJKLIAHM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNKIJKLIAHM_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIJKLIAHM_GDEOPIBNOIN_OFFSET))(this);
	}
};
