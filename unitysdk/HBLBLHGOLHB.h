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

#define HBLBLHGOLHB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x17AE8E20)
#define HBLBLHGOLHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AE8D90)
#define HBLBLHGOLHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AE8B30)
#define HBLBLHGOLHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AE93E0)
#define HBLBLHGOLHB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE9220)

inline static constexpr unsigned int HBLBLHGOLHB_TypeDefinitionIndex = 74063;

class HBLBLHGOLHB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* HNNHIGLPJJO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLBLHGOLHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLBLHGOLHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBLBLHGOLHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLBLHGOLHB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBLBLHGOLHB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
