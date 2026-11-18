#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define DHFBHFGIOFC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x147CA7A0)
#define DHFBHFGIOFC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x147CA6C0)
#define DHFBHFGIOFC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x147CAC00)
#define DHFBHFGIOFC__CTOR_OFFSET UNITYSDK_OFFSET(0x147CAA70)

inline static constexpr unsigned int DHFBHFGIOFC_TypeDefinitionIndex = 39761;

class DHFBHFGIOFC : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* JMBPGMDOIAF; // 0x28
	::MKBBPOFGLOF* KNMBHIBCKBN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHFGIOFC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHFGIOFC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DHFBHFGIOFC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHFGIOFC_GDEOPIBNOIN_OFFSET))(this);
	}
};
