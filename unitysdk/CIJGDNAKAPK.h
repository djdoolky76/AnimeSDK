#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CIJGDNAKAPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x193D7220)
#define CIJGDNAKAPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x139CC790)
#define CIJGDNAKAPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x193D7750)
#define CIJGDNAKAPK__CTOR_OFFSET UNITYSDK_OFFSET(0x193D7510)

inline static constexpr unsigned int CIJGDNAKAPK_TypeDefinitionIndex = 70827;

class CIJGDNAKAPK : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x18
	::AAMKEDEDHPD_1<::System::Single>* LDMKHBOIDMJ; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x30
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x40
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJGDNAKAPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJGDNAKAPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CIJGDNAKAPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJGDNAKAPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
