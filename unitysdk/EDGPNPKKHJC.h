#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define EDGPNPKKHJC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17225B50)
#define EDGPNPKKHJC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17225B00)
#define EDGPNPKKHJC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17225BB0)
#define EDGPNPKKHJC__CTOR_OFFSET UNITYSDK_OFFSET(0x17225BA0)

inline static constexpr unsigned int EDGPNPKKHJC_TypeDefinitionIndex = 58994;

class EDGPNPKKHJC : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGPNPKKHJC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGPNPKKHJC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EDGPNPKKHJC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGPNPKKHJC_GDEOPIBNOIN_OFFSET))(this);
	}
};
