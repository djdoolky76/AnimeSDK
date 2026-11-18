#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define IMILPPADJDM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1381DB70)
#define IMILPPADJDM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1381DAA0)
#define IMILPPADJDM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1381DC70)
#define IMILPPADJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1381DBD0)

inline static constexpr unsigned int IMILPPADJDM_TypeDefinitionIndex = 63514;

class IMILPPADJDM : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMILPPADJDM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMILPPADJDM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMILPPADJDM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMILPPADJDM_GDEOPIBNOIN_OFFSET))(this);
	}
};
