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

#define EEPJBFLIMKP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x154A3030)
#define EEPJBFLIMKP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x154A2FC0)
#define EEPJBFLIMKP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x154A2DC0)
#define EEPJBFLIMKP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x154A3570)
#define EEPJBFLIMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x154A33F0)

inline static constexpr unsigned int EEPJBFLIMKP_TypeDefinitionIndex = 54839;

class EEPJBFLIMKP : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* HNNHIGLPJJO; // 0x18
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJBFLIMKP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJBFLIMKP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EEPJBFLIMKP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EEPJBFLIMKP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJBFLIMKP_GDEOPIBNOIN_OFFSET))(this);
	}
};
