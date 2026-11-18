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

#define NAHOMHKLMNP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x13B4DDF0)
#define NAHOMHKLMNP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13B4DD80)
#define NAHOMHKLMNP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13B4DB80)
#define NAHOMHKLMNP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13B4E330)
#define NAHOMHKLMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4E1B0)

inline static constexpr unsigned int NAHOMHKLMNP_TypeDefinitionIndex = 38433;

class NAHOMHKLMNP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x18
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x20
	::AAMKEDEDHPD_1<::System::Single>* HNNHIGLPJJO; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHOMHKLMNP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHOMHKLMNP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NAHOMHKLMNP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NAHOMHKLMNP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHOMHKLMNP_GDEOPIBNOIN_OFFSET))(this);
	}
};
