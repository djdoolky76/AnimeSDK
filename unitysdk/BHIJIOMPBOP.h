#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BHIJIOMPBOP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1867A510)
#define BHIJIOMPBOP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1867A310)
#define BHIJIOMPBOP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1867A9F0)
#define BHIJIOMPBOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1867A850)

inline static constexpr unsigned int BHIJIOMPBOP_TypeDefinitionIndex = 76380;

class BHIJIOMPBOP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* DAEIJCOCECC; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* MONOMBLBBEL; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* EECEKEPKHCC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* MPHACCOJIBA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJIOMPBOP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJIOMPBOP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BHIJIOMPBOP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJIOMPBOP_GDEOPIBNOIN_OFFSET))(this);
	}
};
