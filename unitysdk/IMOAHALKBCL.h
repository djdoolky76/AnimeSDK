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

#define IMOAHALKBCL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x16AB3640)
#define IMOAHALKBCL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16AB35B0)
#define IMOAHALKBCL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16AB3350)
#define IMOAHALKBCL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16AB3C60)
#define IMOAHALKBCL__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB3AA0)

inline static constexpr unsigned int IMOAHALKBCL_TypeDefinitionIndex = 72824;

class IMOAHALKBCL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HNNHIGLPJJO; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAHALKBCL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAHALKBCL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMOAHALKBCL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAHALKBCL_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMOAHALKBCL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
