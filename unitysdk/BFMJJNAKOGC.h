#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
class PDLAGKINJNL;

#define BFMJJNAKOGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14C40FC0)
#define BFMJJNAKOGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14C40EE0)
#define BFMJJNAKOGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14C410D0)
#define BFMJJNAKOGC__CTOR_OFFSET UNITYSDK_OFFSET(0x14C41070)

inline static constexpr unsigned int BFMJJNAKOGC_TypeDefinitionIndex = 92725;

class BFMJJNAKOGC : public ::MHMFINLCNFN
{
public:
	::EBNPOEHOAGD* ACDKKCINLON; // 0x28
	::PDLAGKINJNL* FDPMDEJANJH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJJNAKOGC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJJNAKOGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BFMJJNAKOGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJJNAKOGC_GDEOPIBNOIN_OFFSET))(this);
	}
};
