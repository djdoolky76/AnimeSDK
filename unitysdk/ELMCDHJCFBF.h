#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define ELMCDHJCFBF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12362D80)
#define ELMCDHJCFBF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12362D30)
#define ELMCDHJCFBF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12362DF0)
#define ELMCDHJCFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x12362DE0)

inline static constexpr unsigned int ELMCDHJCFBF_TypeDefinitionIndex = 49298;

class ELMCDHJCFBF : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMCDHJCFBF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMCDHJCFBF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ELMCDHJCFBF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMCDHJCFBF_GDEOPIBNOIN_OFFSET))(this);
	}
};
