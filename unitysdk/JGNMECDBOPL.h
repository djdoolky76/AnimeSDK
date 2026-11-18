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

#define JGNMECDBOPL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1C35F040)
#define JGNMECDBOPL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1C35EFB0)
#define JGNMECDBOPL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C35ED50)
#define JGNMECDBOPL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C35F600)
#define JGNMECDBOPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35F440)

inline static constexpr unsigned int JGNMECDBOPL_TypeDefinitionIndex = 76384;

class JGNMECDBOPL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HNNHIGLPJJO; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNMECDBOPL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNMECDBOPL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JGNMECDBOPL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JGNMECDBOPL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNMECDBOPL_GDEOPIBNOIN_OFFSET))(this);
	}
};
