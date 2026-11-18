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

#define DEHJMMMPPMP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18334E30)
#define DEHJMMMPPMP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18334BD0)
#define DEHJMMMPPMP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18335700)
#define DEHJMMMPPMP__CTOR_OFFSET UNITYSDK_OFFSET(0x18335540)

inline static constexpr unsigned int DEHJMMMPPMP_TypeDefinitionIndex = 93084;

class DEHJMMMPPMP : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x20
	::KCMIFNGABDC_1<::System::String*>* KFLGMJMDNCN; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* CAOOPCIPNIH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHJMMMPPMP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHJMMMPPMP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DEHJMMMPPMP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHJMMMPPMP_GDEOPIBNOIN_OFFSET))(this);
	}
};
