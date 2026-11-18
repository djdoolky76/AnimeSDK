#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EPKJNDFDBKD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x172534B0)
#define EPKJNDFDBKD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17253420)
#define EPKJNDFDBKD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17253840)
#define EPKJNDFDBKD__CTOR_OFFSET UNITYSDK_OFFSET(0x172537A0)

inline static constexpr unsigned int EPKJNDFDBKD_TypeDefinitionIndex = 47197;

class EPKJNDFDBKD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OJOPNICAFIH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKJNDFDBKD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKJNDFDBKD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EPKJNDFDBKD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKJNDFDBKD_GDEOPIBNOIN_OFFSET))(this);
	}
};
