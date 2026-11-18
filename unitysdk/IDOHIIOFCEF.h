#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IDOHIIOFCEF_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1A39A010)
#define IDOHIIOFCEF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A399FA0)
#define IDOHIIOFCEF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A399C80)
#define IDOHIIOFCEF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A39A6F0)
#define IDOHIIOFCEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39A4C0)

inline static constexpr unsigned int IDOHIIOFCEF_TypeDefinitionIndex = 45632;

class IDOHIIOFCEF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x18
	::KCMIFNGABDC_1<::System::Single>* NMBOPHBGEIO; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* DNDKOGNCKMB; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* ANENOLPGHPC; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* OMJALKHKPKB; // 0x48
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHIIOFCEF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHIIOFCEF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IDOHIIOFCEF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHIIOFCEF_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IDOHIIOFCEF_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
