#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define GFGAFCIKKLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DD3350)
#define GFGAFCIKKLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DD3280)
#define GFGAFCIKKLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DD3490)
#define GFGAFCIKKLB__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD33F0)

inline static constexpr unsigned int GFGAFCIKKLB_TypeDefinitionIndex = 62299;

class GFGAFCIKKLB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGAFCIKKLB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGAFCIKKLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFGAFCIKKLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGAFCIKKLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
