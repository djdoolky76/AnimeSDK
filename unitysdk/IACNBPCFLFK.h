#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define IACNBPCFLFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A689C0)
#define IACNBPCFLFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A687C0)
#define IACNBPCFLFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16A8B210)
#define IACNBPCFLFK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A68D50)

inline static constexpr unsigned int IACNBPCFLFK_TypeDefinitionIndex = 81808;

class IACNBPCFLFK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x18
	::MKBBPOFGLOF* DGLPCINAMAC; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACNBPCFLFK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACNBPCFLFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IACNBPCFLFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACNBPCFLFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
