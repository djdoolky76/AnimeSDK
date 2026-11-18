#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define EMFEKNGFKLO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AA76B0)
#define EMFEKNGFKLO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AA75E0)
#define EMFEKNGFKLO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AA7820)
#define EMFEKNGFKLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA7780)

inline static constexpr unsigned int EMFEKNGFKLO_TypeDefinitionIndex = 71060;

class EMFEKNGFKLO : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEKNGFKLO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEKNGFKLO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EMFEKNGFKLO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEKNGFKLO_GDEOPIBNOIN_OFFSET))(this);
	}
};
