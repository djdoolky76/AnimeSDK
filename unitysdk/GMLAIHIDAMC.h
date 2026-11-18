#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define GMLAIHIDAMC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F09D40)
#define GMLAIHIDAMC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F09C70)
#define GMLAIHIDAMC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F09E80)
#define GMLAIHIDAMC__CTOR_OFFSET UNITYSDK_OFFSET(0x10F09DE0)

inline static constexpr unsigned int GMLAIHIDAMC_TypeDefinitionIndex = 64515;

class GMLAIHIDAMC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLAIHIDAMC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLAIHIDAMC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GMLAIHIDAMC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLAIHIDAMC_GDEOPIBNOIN_OFFSET))(this);
	}
};
