#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define PMKDEEKDEBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B9F62F0)
#define PMKDEEKDEBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B9F61B0)
#define PMKDEEKDEBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B9F6620)
#define PMKDEEKDEBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F6510)

inline static constexpr unsigned int PMKDEEKDEBK_TypeDefinitionIndex = 80347;

class PMKDEEKDEBK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::CPABOPKIGAL* KDIENHAHOCK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDEEKDEBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDEEKDEBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PMKDEEKDEBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDEEKDEBK_GDEOPIBNOIN_OFFSET))(this);
	}
};
