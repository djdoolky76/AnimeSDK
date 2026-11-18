#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define IALLLKGIKHC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x140D4DA0)
#define IALLLKGIKHC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x140D4CD0)
#define IALLLKGIKHC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x140D4F10)
#define IALLLKGIKHC__CTOR_OFFSET UNITYSDK_OFFSET(0x140D4E70)

inline static constexpr unsigned int IALLLKGIKHC_TypeDefinitionIndex = 93268;

class IALLLKGIKHC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALLLKGIKHC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALLLKGIKHC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IALLLKGIKHC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALLLKGIKHC_GDEOPIBNOIN_OFFSET))(this);
	}
};
