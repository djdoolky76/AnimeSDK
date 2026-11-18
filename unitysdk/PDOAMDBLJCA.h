#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PDOAMDBLJCA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDA7790)
#define PDOAMDBLJCA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDA76C0)
#define PDOAMDBLJCA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDA7BC0)
#define PDOAMDBLJCA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA7AD0)

inline static constexpr unsigned int PDOAMDBLJCA_TypeDefinitionIndex = 48346;

class PDOAMDBLJCA : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* GPFCNMANCKD; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOAMDBLJCA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOAMDBLJCA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PDOAMDBLJCA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOAMDBLJCA_GDEOPIBNOIN_OFFSET))(this);
	}
};
