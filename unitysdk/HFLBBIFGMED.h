#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define HFLBBIFGMED_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x100FEE90)
#define HFLBBIFGMED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x100FEE40)
#define HFLBBIFGMED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x100FEF00)
#define HFLBBIFGMED__CTOR_OFFSET UNITYSDK_OFFSET(0x100FEEF0)

inline static constexpr unsigned int HFLBBIFGMED_TypeDefinitionIndex = 42231;

class HFLBBIFGMED : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLBBIFGMED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLBBIFGMED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFLBBIFGMED_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLBBIFGMED_GDEOPIBNOIN_OFFSET))(this);
	}
};
