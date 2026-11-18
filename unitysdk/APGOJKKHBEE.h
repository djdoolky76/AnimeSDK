#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define APGOJKKHBEE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14C25BF0)
#define APGOJKKHBEE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14C25BA0)
#define APGOJKKHBEE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14C25E70)
#define APGOJKKHBEE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C25E60)

inline static constexpr unsigned int APGOJKKHBEE_TypeDefinitionIndex = 38496;

class APGOJKKHBEE : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOJKKHBEE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOJKKHBEE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + APGOJKKHBEE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOJKKHBEE_GDEOPIBNOIN_OFFSET))(this);
	}
};
