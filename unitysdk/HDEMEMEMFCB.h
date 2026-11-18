#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define HDEMEMEMFCB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x19E04590)
#define HDEMEMEMFCB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19E044C0)
#define HDEMEMEMFCB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19E04470)
#define HDEMEMEMFCB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19E04630)
#define HDEMEMEMFCB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E04620)

inline static constexpr unsigned int HDEMEMEMFCB_TypeDefinitionIndex = 70797;

class HDEMEMEMFCB : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEMEMEMFCB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEMEMEMFCB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDEMEMEMFCB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDEMEMEMFCB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEMEMEMFCB_GDEOPIBNOIN_OFFSET))(this);
	}
};
