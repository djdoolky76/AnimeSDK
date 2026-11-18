#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MLDAFICLCNM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12FF9D80)
#define MLDAFICLCNM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12FF9B20)
#define MLDAFICLCNM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12FFA390)
#define MLDAFICLCNM__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFA1D0)

inline static constexpr unsigned int MLDAFICLCNM_TypeDefinitionIndex = 72601;

class MLDAFICLCNM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* HHGILNNMNAK; // 0x18
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLDAFICLCNM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLDAFICLCNM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MLDAFICLCNM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLDAFICLCNM_GDEOPIBNOIN_OFFSET))(this);
	}
};
