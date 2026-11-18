#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define OFLJADJFJGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFB85910)
#define OFLJADJFJGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFB858C0)
#define OFLJADJFJGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFB859D0)
#define OFLJADJFJGC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB859C0)

inline static constexpr unsigned int OFLJADJFJGC_TypeDefinitionIndex = 41912;

class OFLJADJFJGC : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJADJFJGC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJADJFJGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OFLJADJFJGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJADJFJGC_GDEOPIBNOIN_OFFSET))(this);
	}
};
