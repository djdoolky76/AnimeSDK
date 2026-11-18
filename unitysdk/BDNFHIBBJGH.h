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

#define BDNFHIBBJGH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1506BEF0)
#define BDNFHIBBJGH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1506BC90)
#define BDNFHIBBJGH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1506C4E0)
#define BDNFHIBBJGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1506C320)

inline static constexpr unsigned int BDNFHIBBJGH_TypeDefinitionIndex = 48425;

class BDNFHIBBJGH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* HHGILNNMNAK; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNFHIBBJGH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNFHIBBJGH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BDNFHIBBJGH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNFHIBBJGH_GDEOPIBNOIN_OFFSET))(this);
	}
};
