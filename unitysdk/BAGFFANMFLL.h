#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define BAGFFANMFLL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x169D9BE0)
#define BAGFFANMFLL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x169D9B90)
#define BAGFFANMFLL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x169D9D40)
#define BAGFFANMFLL__CTOR_OFFSET UNITYSDK_OFFSET(0x169D9D30)

inline static constexpr unsigned int BAGFFANMFLL_TypeDefinitionIndex = 66162;

class BAGFFANMFLL : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGFFANMFLL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGFFANMFLL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BAGFFANMFLL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGFFANMFLL_GDEOPIBNOIN_OFFSET))(this);
	}
};
