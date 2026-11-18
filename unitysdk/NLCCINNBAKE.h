#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NLCCINNBAKE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xE1A8B40)
#define NLCCINNBAKE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE1A8AD0)
#define NLCCINNBAKE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE1A8A40)
#define NLCCINNBAKE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE1A8DE0)
#define NLCCINNBAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A8D40)

inline static constexpr unsigned int NLCCINNBAKE_TypeDefinitionIndex = 73359;

class NLCCINNBAKE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCCINNBAKE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCCINNBAKE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLCCINNBAKE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCCINNBAKE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLCCINNBAKE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
