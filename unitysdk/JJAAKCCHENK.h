#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JJAAKCCHENK_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x18A20820)
#define JJAAKCCHENK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18A207B0)
#define JJAAKCCHENK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18A20720)
#define JJAAKCCHENK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18A20950)
#define JJAAKCCHENK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A208B0)

inline static constexpr unsigned int JJAAKCCHENK_TypeDefinitionIndex = 49256;

class JJAAKCCHENK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAAKCCHENK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAAKCCHENK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JJAAKCCHENK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAAKCCHENK_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JJAAKCCHENK_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
