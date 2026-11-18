#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define INCMKCMKCHD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x153C2CD0)
#define INCMKCMKCHD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153C2BF0)
#define INCMKCMKCHD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x153C2EC0)
#define INCMKCMKCHD__CTOR_OFFSET UNITYSDK_OFFSET(0x153C2D30)

inline static constexpr unsigned int INCMKCMKCHD_TypeDefinitionIndex = 49410;

class INCMKCMKCHD : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* DEBCEEGEPGH; // 0x28
	::MKBBPOFGLOF* PPLENJOAIIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCMKCMKCHD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCMKCMKCHD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + INCMKCMKCHD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCMKCMKCHD_GDEOPIBNOIN_OFFSET))(this);
	}
};
