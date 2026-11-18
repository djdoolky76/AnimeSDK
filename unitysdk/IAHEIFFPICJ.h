#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define IAHEIFFPICJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1655D460)
#define IAHEIFFPICJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1655D3F0)
#define IAHEIFFPICJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1655D3A0)
#define IAHEIFFPICJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1655D560)
#define IAHEIFFPICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1655D550)

inline static constexpr unsigned int IAHEIFFPICJ_TypeDefinitionIndex = 49813;

class IAHEIFFPICJ : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHEIFFPICJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHEIFFPICJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IAHEIFFPICJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHEIFFPICJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IAHEIFFPICJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
