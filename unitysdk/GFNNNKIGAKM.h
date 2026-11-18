#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define GFNNNKIGAKM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15CE1530)
#define GFNNNKIGAKM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15CE1460)
#define GFNNNKIGAKM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15CE1A70)
#define GFNNNKIGAKM__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE19D0)

inline static constexpr unsigned int GFNNNKIGAKM_TypeDefinitionIndex = 67082;

class GFNNNKIGAKM : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNNNKIGAKM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNNNKIGAKM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFNNNKIGAKM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNNNKIGAKM_GDEOPIBNOIN_OFFSET))(this);
	}
};
