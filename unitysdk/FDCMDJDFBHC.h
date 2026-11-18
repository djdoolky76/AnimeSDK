#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define FDCMDJDFBHC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F5EDA0)
#define FDCMDJDFBHC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F5ED50)
#define FDCMDJDFBHC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F5EED0)
#define FDCMDJDFBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5EEC0)

inline static constexpr unsigned int FDCMDJDFBHC_TypeDefinitionIndex = 71101;

class FDCMDJDFBHC : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* LKOLDCJCOCA; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCMDJDFBHC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCMDJDFBHC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDCMDJDFBHC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCMDJDFBHC_GDEOPIBNOIN_OFFSET))(this);
	}
};
