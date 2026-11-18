#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define GMPBGBKMINJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D03920)
#define GMPBGBKMINJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D038D0)
#define GMPBGBKMINJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D03AD0)
#define GMPBGBKMINJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D03AC0)

inline static constexpr unsigned int GMPBGBKMINJ_TypeDefinitionIndex = 42727;

class GMPBGBKMINJ : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPBGBKMINJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPBGBKMINJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GMPBGBKMINJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPBGBKMINJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
