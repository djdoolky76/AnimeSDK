#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OONCEFNFHOG_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x15520EE0)
#define OONCEFNFHOG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15520E70)
#define OONCEFNFHOG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15520C70)
#define OONCEFNFHOG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x155212F0)
#define OONCEFNFHOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15521170)

inline static constexpr unsigned int OONCEFNFHOG_TypeDefinitionIndex = 82662;

class OONCEFNFHOG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONCEFNFHOG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONCEFNFHOG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OONCEFNFHOG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OONCEFNFHOG_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONCEFNFHOG_GDEOPIBNOIN_OFFSET))(this);
	}
};
