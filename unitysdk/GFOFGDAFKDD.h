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

#define GFOFGDAFKDD_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xBB8C890)
#define GFOFGDAFKDD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB8C820)
#define GFOFGDAFKDD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB8C620)
#define GFOFGDAFKDD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB8CDD0)
#define GFOFGDAFKDD__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8CC50)

inline static constexpr unsigned int GFOFGDAFKDD_TypeDefinitionIndex = 67791;

class GFOFGDAFKDD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* HNNHIGLPJJO; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFGDAFKDD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFGDAFKDD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFOFGDAFKDD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFGDAFKDD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFOFGDAFKDD_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
