#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AEGADIKKDIG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14346940)
#define AEGADIKKDIG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14346800)
#define AEGADIKKDIG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14346D80)
#define AEGADIKKDIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14346C60)

inline static constexpr unsigned int AEGADIKKDIG_TypeDefinitionIndex = 44503;

class AEGADIKKDIG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x18
	::AAMKEDEDHPD_1<::System::Single>* IKIOCGDCNKB; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* ANDAJEEDAJD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGADIKKDIG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGADIKKDIG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AEGADIKKDIG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGADIKKDIG_GDEOPIBNOIN_OFFSET))(this);
	}
};
