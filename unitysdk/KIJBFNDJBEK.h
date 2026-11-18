#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define KIJBFNDJBEK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1765D520)
#define KIJBFNDJBEK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1765D4D0)
#define KIJBFNDJBEK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1765D740)
#define KIJBFNDJBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D730)

inline static constexpr unsigned int KIJBFNDJBEK_TypeDefinitionIndex = 83853;

class KIJBFNDJBEK : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJBFNDJBEK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJBFNDJBEK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KIJBFNDJBEK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJBFNDJBEK_GDEOPIBNOIN_OFFSET))(this);
	}
};
