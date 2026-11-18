#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define EMOLIIAPNLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16162210)
#define EMOLIIAPNLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16162140)
#define EMOLIIAPNLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16162550)
#define EMOLIIAPNLB__CTOR_OFFSET UNITYSDK_OFFSET(0x161624B0)

inline static constexpr unsigned int EMOLIIAPNLB_TypeDefinitionIndex = 39736;

class EMOLIIAPNLB : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOLIIAPNLB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOLIIAPNLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EMOLIIAPNLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOLIIAPNLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
