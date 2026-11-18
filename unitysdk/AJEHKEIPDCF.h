#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;

#define AJEHKEIPDCF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14359380)
#define AJEHKEIPDCF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x143592F0)
#define AJEHKEIPDCF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14359580)
#define AJEHKEIPDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x14359540)

inline static constexpr unsigned int AJEHKEIPDCF_TypeDefinitionIndex = 56632;

class AJEHKEIPDCF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEHKEIPDCF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEHKEIPDCF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJEHKEIPDCF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEHKEIPDCF_GDEOPIBNOIN_OFFSET))(this);
	}
};
