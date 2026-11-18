#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FMGLCHGEMIL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x179B6070)
#define FMGLCHGEMIL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x179B5FA0)
#define FMGLCHGEMIL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x179B6440)
#define FMGLCHGEMIL__CTOR_OFFSET UNITYSDK_OFFSET(0x179B63A0)

inline static constexpr unsigned int FMGLCHGEMIL_TypeDefinitionIndex = 49397;

class FMGLCHGEMIL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLCHGEMIL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLCHGEMIL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FMGLCHGEMIL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLCHGEMIL_GDEOPIBNOIN_OFFSET))(this);
	}
};
