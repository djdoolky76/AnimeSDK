#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define IIHEGHCOBFO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A24A70)
#define IIHEGHCOBFO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A249E0)
#define IIHEGHCOBFO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A24DB0)
#define IIHEGHCOBFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A24D10)

inline static constexpr unsigned int IIHEGHCOBFO_TypeDefinitionIndex = 40412;

class IIHEGHCOBFO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHEGHCOBFO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHEGHCOBFO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IIHEGHCOBFO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHEGHCOBFO_GDEOPIBNOIN_OFFSET))(this);
	}
};
