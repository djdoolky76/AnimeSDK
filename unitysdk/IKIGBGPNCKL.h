#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define IKIGBGPNCKL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1ACB7470)
#define IKIGBGPNCKL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1ACB73A0)
#define IKIGBGPNCKL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1ACB77A0)
#define IKIGBGPNCKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB7700)

inline static constexpr unsigned int IKIGBGPNCKL_TypeDefinitionIndex = 92715;

class IKIGBGPNCKL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGBGPNCKL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGBGPNCKL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IKIGBGPNCKL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGBGPNCKL_GDEOPIBNOIN_OFFSET))(this);
	}
};
