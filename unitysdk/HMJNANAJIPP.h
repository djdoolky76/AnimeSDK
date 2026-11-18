#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HMJNANAJIPP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15BDF0F0)
#define HMJNANAJIPP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15BDF060)
#define HMJNANAJIPP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15BDF380)
#define HMJNANAJIPP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDF2E0)

inline static constexpr unsigned int HMJNANAJIPP_TypeDefinitionIndex = 86675;

class HMJNANAJIPP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* IBCJAIDAADP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJNANAJIPP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJNANAJIPP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HMJNANAJIPP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJNANAJIPP_GDEOPIBNOIN_OFFSET))(this);
	}
};
