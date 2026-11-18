#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define DKANMIOJOEK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13E53DC0)
#define DKANMIOJOEK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13E53CF0)
#define DKANMIOJOEK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13E53EC0)
#define DKANMIOJOEK__CTOR_OFFSET UNITYSDK_OFFSET(0x13E53E20)

inline static constexpr unsigned int DKANMIOJOEK_TypeDefinitionIndex = 86882;

class DKANMIOJOEK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANMIOJOEK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANMIOJOEK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DKANMIOJOEK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANMIOJOEK_GDEOPIBNOIN_OFFSET))(this);
	}
};
