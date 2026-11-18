#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define PHJNNOPFJIE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B9E5C60)
#define PHJNNOPFJIE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B9E5BD0)
#define PHJNNOPFJIE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B9E5FB0)
#define PHJNNOPFJIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5F10)

inline static constexpr unsigned int PHJNNOPFJIE_TypeDefinitionIndex = 87176;

class PHJNNOPFJIE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJNNOPFJIE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJNNOPFJIE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PHJNNOPFJIE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJNNOPFJIE_GDEOPIBNOIN_OFFSET))(this);
	}
};
