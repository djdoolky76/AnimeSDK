#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define CGFPPNJFDAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14799C10)
#define CGFPPNJFDAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14799B40)
#define CGFPPNJFDAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14799E50)
#define CGFPPNJFDAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14799D40)

inline static constexpr unsigned int CGFPPNJFDAJ_TypeDefinitionIndex = 73085;

class CGFPPNJFDAJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFPPNJFDAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFPPNJFDAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CGFPPNJFDAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFPPNJFDAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
