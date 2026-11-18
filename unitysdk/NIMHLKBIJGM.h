#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define NIMHLKBIJGM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x105BBF80)
#define NIMHLKBIJGM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x105BBEF0)
#define NIMHLKBIJGM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x105BC0A0)
#define NIMHLKBIJGM__CTOR_OFFSET UNITYSDK_OFFSET(0x105BBFE0)

inline static constexpr unsigned int NIMHLKBIJGM_TypeDefinitionIndex = 56211;

class NIMHLKBIJGM : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* FKPIIOCJKDK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLKBIJGM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLKBIJGM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NIMHLKBIJGM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLKBIJGM_GDEOPIBNOIN_OFFSET))(this);
	}
};
