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

#define MIDJLAOOALB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x14DE7640)
#define MIDJLAOOALB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DE75D0)
#define MIDJLAOOALB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DE73D0)
#define MIDJLAOOALB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DE7B90)
#define MIDJLAOOALB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE7A10)

inline static constexpr unsigned int MIDJLAOOALB_TypeDefinitionIndex = 46934;

class MIDJLAOOALB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* HNNHIGLPJJO; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDJLAOOALB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDJLAOOALB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MIDJLAOOALB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDJLAOOALB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MIDJLAOOALB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
