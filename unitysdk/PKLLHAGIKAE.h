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

#define PKLLHAGIKAE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1A7F84A0)
#define PKLLHAGIKAE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A7F8410)
#define PKLLHAGIKAE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A7F81B0)
#define PKLLHAGIKAE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A7F8A70)
#define PKLLHAGIKAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F88B0)

inline static constexpr unsigned int PKLLHAGIKAE_TypeDefinitionIndex = 86422;

class PKLLHAGIKAE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* HNNHIGLPJJO; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLLHAGIKAE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLLHAGIKAE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKLLHAGIKAE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKLLHAGIKAE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLLHAGIKAE_GDEOPIBNOIN_OFFSET))(this);
	}
};
