#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BHHANMACKLL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128A92B0)
#define BHHANMACKLL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x128A91E0)
#define BHHANMACKLL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x128A96E0)
#define BHHANMACKLL_MMCHLEOBGKD_OFFSET UNITYSDK_OFFSET(0x128A9340)
#define BHHANMACKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x128A95F0)

inline static constexpr unsigned int BHHANMACKLL_TypeDefinitionIndex = 52573;

class BHHANMACKLL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* FECNOCOEOMD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHANMACKLL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHANMACKLL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BHHANMACKLL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHANMACKLL_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Int32 MMCHLEOBGKD(::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH)
	{
		return ((::System::Int32(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + BHHANMACKLL_MMCHLEOBGKD_OFFSET))(JEJJLALJJKH);
	}
};
