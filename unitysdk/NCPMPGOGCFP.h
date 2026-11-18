#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define NCPMPGOGCFP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE732990)
#define NCPMPGOGCFP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE732940)
#define NCPMPGOGCFP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE7329F0)
#define NCPMPGOGCFP__CTOR_OFFSET UNITYSDK_OFFSET(0xE7329E0)

inline static constexpr unsigned int NCPMPGOGCFP_TypeDefinitionIndex = 50933;

class NCPMPGOGCFP : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPMPGOGCFP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPMPGOGCFP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NCPMPGOGCFP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPMPGOGCFP_GDEOPIBNOIN_OFFSET))(this);
	}
};
