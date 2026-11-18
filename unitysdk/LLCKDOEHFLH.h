#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define LLCKDOEHFLH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F21260)
#define LLCKDOEHFLH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F21210)
#define LLCKDOEHFLH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F213F0)
#define LLCKDOEHFLH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F213E0)

inline static constexpr unsigned int LLCKDOEHFLH_TypeDefinitionIndex = 92801;

class LLCKDOEHFLH : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCKDOEHFLH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCKDOEHFLH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LLCKDOEHFLH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCKDOEHFLH_GDEOPIBNOIN_OFFSET))(this);
	}
};
