#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define GOAHABEEDHD_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x13DF7300)
#define GOAHABEEDHD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DF7260)
#define GOAHABEEDHD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DF7210)
#define GOAHABEEDHD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DF7360)
#define GOAHABEEDHD__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF7350)

inline static constexpr unsigned int GOAHABEEDHD_TypeDefinitionIndex = 70234;

class GOAHABEEDHD : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAHABEEDHD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAHABEEDHD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOAHABEEDHD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOAHABEEDHD_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAHABEEDHD_GDEOPIBNOIN_OFFSET))(this);
	}
};
