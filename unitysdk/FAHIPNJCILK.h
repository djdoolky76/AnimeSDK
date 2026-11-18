#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class FKNKBAOGJOA;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FAHIPNJCILK_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1355F880)
#define FAHIPNJCILK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1355F810)
#define FAHIPNJCILK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1355F610)
#define FAHIPNJCILK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1355FDD0)
#define FAHIPNJCILK__CTOR_OFFSET UNITYSDK_OFFSET(0x1355FC80)

inline static constexpr unsigned int FAHIPNJCILK_TypeDefinitionIndex = 38876;

class FAHIPNJCILK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::FKNKBAOGJOA* HNNHIGLPJJO; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIPNJCILK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIPNJCILK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FAHIPNJCILK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FAHIPNJCILK_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIPNJCILK_GDEOPIBNOIN_OFFSET))(this);
	}
};
