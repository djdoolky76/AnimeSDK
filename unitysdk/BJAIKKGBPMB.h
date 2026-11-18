#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BJAIKKGBPMB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x186802C0)
#define BJAIKKGBPMB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18680250)
#define BJAIKKGBPMB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1867FFF0)
#define BJAIKKGBPMB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18680730)
#define BJAIKKGBPMB__CTOR_OFFSET UNITYSDK_OFFSET(0x18680570)

inline static constexpr unsigned int BJAIKKGBPMB_TypeDefinitionIndex = 58398;

class BJAIKKGBPMB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x20
	::KCMIFNGABDC_1<::System::Single>* MOELGOMMEEC; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* OJGOCKNMDKE; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAIKKGBPMB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAIKKGBPMB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BJAIKKGBPMB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BJAIKKGBPMB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAIKKGBPMB_GDEOPIBNOIN_OFFSET))(this);
	}
};
