#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define NGBHCLMGMBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x172834A0)
#define NGBHCLMGMBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17283410)
#define NGBHCLMGMBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17283600)
#define NGBHCLMGMBG__CTOR_OFFSET UNITYSDK_OFFSET(0x17283540)

inline static constexpr unsigned int NGBHCLMGMBG_TypeDefinitionIndex = 59809;

class NGBHCLMGMBG : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* AEIFINGKKPP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBHCLMGMBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBHCLMGMBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NGBHCLMGMBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBHCLMGMBG_GDEOPIBNOIN_OFFSET))(this);
	}
};
