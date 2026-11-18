#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define OLPPJLIJCFO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE162BE0)
#define OLPPJLIJCFO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE162B90)
#define OLPPJLIJCFO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE162DA0)
#define OLPPJLIJCFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE162D90)

inline static constexpr unsigned int OLPPJLIJCFO_TypeDefinitionIndex = 58003;

class OLPPJLIJCFO : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPPJLIJCFO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPPJLIJCFO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLPPJLIJCFO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPPJLIJCFO_GDEOPIBNOIN_OFFSET))(this);
	}
};
