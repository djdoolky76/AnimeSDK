#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FMMEKEBBOEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15EFB1F0)
#define FMMEKEBBOEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15EFB120)
#define FMMEKEBBOEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15EFB500)
#define FMMEKEBBOEG__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFB460)

inline static constexpr unsigned int FMMEKEBBOEG_TypeDefinitionIndex = 48866;

class FMMEKEBBOEG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMEKEBBOEG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMEKEBBOEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FMMEKEBBOEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMEKEBBOEG_GDEOPIBNOIN_OFFSET))(this);
	}
};
