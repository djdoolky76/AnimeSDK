#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KHMPMPKPOON_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1790A850)
#define KHMPMPKPOON_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1790A770)
#define KHMPMPKPOON_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1790AE50)
#define KHMPMPKPOON__CTOR_OFFSET UNITYSDK_OFFSET(0x1790AD60)

inline static constexpr unsigned int KHMPMPKPOON_TypeDefinitionIndex = 70255;

class KHMPMPKPOON : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* LJCLCHGEFBM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMPMPKPOON__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMPMPKPOON_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KHMPMPKPOON_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMPMPKPOON_GDEOPIBNOIN_OFFSET))(this);
	}
};
