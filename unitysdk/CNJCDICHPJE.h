#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define CNJCDICHPJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12044A50)
#define CNJCDICHPJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12044980)
#define CNJCDICHPJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12044C70)
#define CNJCDICHPJE__CTOR_OFFSET UNITYSDK_OFFSET(0x12044BD0)

inline static constexpr unsigned int CNJCDICHPJE_TypeDefinitionIndex = 45557;

class CNJCDICHPJE : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDICHPJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDICHPJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CNJCDICHPJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDICHPJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
