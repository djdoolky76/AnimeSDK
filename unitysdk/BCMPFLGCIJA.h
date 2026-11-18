#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BCMPFLGCIJA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x136162F0)
#define BCMPFLGCIJA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x136160F0)
#define BCMPFLGCIJA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13616730)
#define BCMPFLGCIJA__CTOR_OFFSET UNITYSDK_OFFSET(0x136165B0)

inline static constexpr unsigned int BCMPFLGCIJA_TypeDefinitionIndex = 45515;

class BCMPFLGCIJA : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Single>* LDMKHBOIDMJ; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMPFLGCIJA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMPFLGCIJA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BCMPFLGCIJA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMPFLGCIJA_GDEOPIBNOIN_OFFSET))(this);
	}
};
