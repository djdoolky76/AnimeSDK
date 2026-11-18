#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JFCAAGHNCPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A5F450)
#define JFCAAGHNCPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A5F3C0)
#define JFCAAGHNCPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A5F550)
#define JFCAAGHNCPK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5F4B0)

inline static constexpr unsigned int JFCAAGHNCPK_TypeDefinitionIndex = 62635;

class JFCAAGHNCPK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JPJHAJKJOHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCAAGHNCPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCAAGHNCPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JFCAAGHNCPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCAAGHNCPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
