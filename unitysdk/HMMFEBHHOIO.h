#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define HMMFEBHHOIO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F4F6D0)
#define HMMFEBHHOIO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F4F680)
#define HMMFEBHHOIO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F4F840)
#define HMMFEBHHOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4F830)

inline static constexpr unsigned int HMMFEBHHOIO_TypeDefinitionIndex = 50659;

class HMMFEBHHOIO : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMFEBHHOIO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMFEBHHOIO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HMMFEBHHOIO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMFEBHHOIO_GDEOPIBNOIN_OFFSET))(this);
	}
};
