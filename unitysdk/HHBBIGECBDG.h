#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define HHBBIGECBDG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x146FB450)
#define HHBBIGECBDG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x146FB400)
#define HHBBIGECBDG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x146FB7A0)
#define HHBBIGECBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x146FB790)

inline static constexpr unsigned int HHBBIGECBDG_TypeDefinitionIndex = 46710;

class HHBBIGECBDG : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBIGECBDG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBIGECBDG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHBBIGECBDG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBIGECBDG_GDEOPIBNOIN_OFFSET))(this);
	}
};
