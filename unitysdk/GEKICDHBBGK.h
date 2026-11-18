#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define GEKICDHBBGK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DD23E0)
#define GEKICDHBBGK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DD2390)
#define GEKICDHBBGK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DD27F0)
#define GEKICDHBBGK__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD27E0)

inline static constexpr unsigned int GEKICDHBBGK_TypeDefinitionIndex = 43742;

class GEKICDHBBGK : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKICDHBBGK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKICDHBBGK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GEKICDHBBGK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKICDHBBGK_GDEOPIBNOIN_OFFSET))(this);
	}
};
