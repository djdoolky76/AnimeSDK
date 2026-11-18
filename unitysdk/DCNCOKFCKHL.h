#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define DCNCOKFCKHL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19740460)
#define DCNCOKFCKHL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19740320)
#define DCNCOKFCKHL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x197407E0)
#define DCNCOKFCKHL__CTOR_OFFSET UNITYSDK_OFFSET(0x197406D0)

inline static constexpr unsigned int DCNCOKFCKHL_TypeDefinitionIndex = 61141;

class DCNCOKFCKHL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* KDIENHAHOCK; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCOKFCKHL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCOKFCKHL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DCNCOKFCKHL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCOKFCKHL_GDEOPIBNOIN_OFFSET))(this);
	}
};
