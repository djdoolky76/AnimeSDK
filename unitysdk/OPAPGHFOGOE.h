#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define OPAPGHFOGOE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1AFC6AB0)
#define OPAPGHFOGOE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AFC6A40)
#define OPAPGHFOGOE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AFC6960)
#define OPAPGHFOGOE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AFC6DC0)
#define OPAPGHFOGOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC6CD0)

inline static constexpr unsigned int OPAPGHFOGOE_TypeDefinitionIndex = 82994;

class OPAPGHFOGOE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* AEFOPPFDGNH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* LJLEIMAFFGD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAPGHFOGOE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAPGHFOGOE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OPAPGHFOGOE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAPGHFOGOE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OPAPGHFOGOE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
