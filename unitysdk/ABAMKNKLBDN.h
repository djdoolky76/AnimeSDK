#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define ABAMKNKLBDN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14337420)
#define ABAMKNKLBDN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14337390)
#define ABAMKNKLBDN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14337750)
#define ABAMKNKLBDN__CTOR_OFFSET UNITYSDK_OFFSET(0x143376B0)

inline static constexpr unsigned int ABAMKNKLBDN_TypeDefinitionIndex = 58257;

class ABAMKNKLBDN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMKNKLBDN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMKNKLBDN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ABAMKNKLBDN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMKNKLBDN_GDEOPIBNOIN_OFFSET))(this);
	}
};
