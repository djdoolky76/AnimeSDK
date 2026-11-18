#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FLALFAIBPDO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13226D60)
#define FLALFAIBPDO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13226C90)
#define FLALFAIBPDO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13226F40)
#define FLALFAIBPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x13226EA0)

inline static constexpr unsigned int FLALFAIBPDO_TypeDefinitionIndex = 39046;

class FLALFAIBPDO : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLALFAIBPDO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLALFAIBPDO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FLALFAIBPDO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLALFAIBPDO_GDEOPIBNOIN_OFFSET))(this);
	}
};
