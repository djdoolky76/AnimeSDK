#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define KJCBCOPPAKE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15161E60)
#define KJCBCOPPAKE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15161D80)
#define KJCBCOPPAKE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15162240)
#define KJCBCOPPAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x151620B0)

inline static constexpr unsigned int KJCBCOPPAKE_TypeDefinitionIndex = 79932;

class KJCBCOPPAKE : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* EGCCIODCJIA; // 0x28
	::CPABOPKIGAL* EKJHPHAOJIK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCBCOPPAKE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCBCOPPAKE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KJCBCOPPAKE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCBCOPPAKE_GDEOPIBNOIN_OFFSET))(this);
	}
};
