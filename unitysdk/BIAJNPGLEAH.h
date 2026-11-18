#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define BIAJNPGLEAH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14ECEF30)
#define BIAJNPGLEAH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14ECEE60)
#define BIAJNPGLEAH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14ECF130)
#define BIAJNPGLEAH__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECF090)

inline static constexpr unsigned int BIAJNPGLEAH_TypeDefinitionIndex = 67640;

class BIAJNPGLEAH : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAJNPGLEAH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAJNPGLEAH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BIAJNPGLEAH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAJNPGLEAH_GDEOPIBNOIN_OFFSET))(this);
	}
};
