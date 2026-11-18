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

#define MBMMGLOBCJM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A635340)
#define MBMMGLOBCJM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A6350E0)
#define MBMMGLOBCJM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A635E40)
#define MBMMGLOBCJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A635C80)

inline static constexpr unsigned int MBMMGLOBCJM_TypeDefinitionIndex = 45695;

class MBMMGLOBCJM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* CAOOPCIPNIH; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::String*>* KFLGMJMDNCN; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMMGLOBCJM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMMGLOBCJM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MBMMGLOBCJM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMMGLOBCJM_GDEOPIBNOIN_OFFSET))(this);
	}
};
