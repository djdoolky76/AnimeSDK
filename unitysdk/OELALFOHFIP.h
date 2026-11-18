#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;

#define OELALFOHFIP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE149020)
#define OELALFOHFIP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE148F90)
#define OELALFOHFIP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE1492F0)
#define OELALFOHFIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE1492B0)

inline static constexpr unsigned int OELALFOHFIP_TypeDefinitionIndex = 57443;

class OELALFOHFIP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELALFOHFIP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELALFOHFIP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OELALFOHFIP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELALFOHFIP_GDEOPIBNOIN_OFFSET))(this);
	}
};
