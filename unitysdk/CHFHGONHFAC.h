#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define CHFHGONHFAC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1479CDF0)
#define CHFHGONHFAC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1479CD10)
#define CHFHGONHFAC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1479D250)
#define CHFHGONHFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1479D0C0)

inline static constexpr unsigned int CHFHGONHFAC_TypeDefinitionIndex = 58988;

class CHFHGONHFAC : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* JMBPGMDOIAF; // 0x28
	::MKBBPOFGLOF* KNMBHIBCKBN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFHGONHFAC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFHGONHFAC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHFHGONHFAC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFHGONHFAC_GDEOPIBNOIN_OFFSET))(this);
	}
};
