#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define BKAEEGINCBJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14C4CFA0)
#define BKAEEGINCBJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14C4CDF0)
#define BKAEEGINCBJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14C4D340)
#define BKAEEGINCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4D1A0)

inline static constexpr unsigned int BKAEEGINCBJ_TypeDefinitionIndex = 79424;

class BKAEEGINCBJ : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* PIAKOEHLIEP; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAEEGINCBJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAEEGINCBJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BKAEEGINCBJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAEEGINCBJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
