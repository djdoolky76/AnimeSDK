#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;

#define OLAEFFJHBGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B7A4A70)
#define OLAEFFJHBGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B7A49E0)
#define OLAEFFJHBGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B7A4B00)
#define OLAEFFJHBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A4AC0)

inline static constexpr unsigned int OLAEFFJHBGC_TypeDefinitionIndex = 40657;

class OLAEFFJHBGC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAEFFJHBGC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAEFFJHBGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLAEFFJHBGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAEFFJHBGC_GDEOPIBNOIN_OFFSET))(this);
	}
};
