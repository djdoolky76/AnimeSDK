#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define JEJLBHLPMKH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17B21AC0)
#define JEJLBHLPMKH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B21A70)
#define JEJLBHLPMKH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B21C30)
#define JEJLBHLPMKH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B21C20)

inline static constexpr unsigned int JEJLBHLPMKH_TypeDefinitionIndex = 64806;

class JEJLBHLPMKH : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLBHLPMKH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLBHLPMKH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JEJLBHLPMKH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLBHLPMKH_GDEOPIBNOIN_OFFSET))(this);
	}
};
