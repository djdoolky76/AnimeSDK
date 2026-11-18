#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define MKFPMBFBKJC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x174A0640)
#define MKFPMBFBKJC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x174A05F0)
#define MKFPMBFBKJC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x174A06F0)
#define MKFPMBFBKJC__CTOR_OFFSET UNITYSDK_OFFSET(0x174A06E0)

inline static constexpr unsigned int MKFPMBFBKJC_TypeDefinitionIndex = 42242;

class MKFPMBFBKJC : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFPMBFBKJC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFPMBFBKJC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MKFPMBFBKJC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFPMBFBKJC_GDEOPIBNOIN_OFFSET))(this);
	}
};
