#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define JHKEIBMEIIP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18739490)
#define JHKEIBMEIIP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x187392E0)
#define JHKEIBMEIIP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x187398F0)
#define JHKEIBMEIIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18739750)

inline static constexpr unsigned int JHKEIBMEIIP_TypeDefinitionIndex = 64652;

class JHKEIBMEIIP : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* PMCIDLBLPNI; // 0x18
	::CPABOPKIGAL* FBBKAKAIAKE; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEIBMEIIP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEIBMEIIP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JHKEIBMEIIP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKEIBMEIIP_GDEOPIBNOIN_OFFSET))(this);
	}
};
