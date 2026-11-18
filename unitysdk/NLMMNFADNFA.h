#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define NLMMNFADNFA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AE28CD0)
#define NLMMNFADNFA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AE28C00)
#define NLMMNFADNFA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AE28EA0)
#define NLMMNFADNFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE28E00)

inline static constexpr unsigned int NLMMNFADNFA_TypeDefinitionIndex = 44435;

class NLMMNFADNFA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMNFADNFA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMNFADNFA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLMMNFADNFA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMNFADNFA_GDEOPIBNOIN_OFFSET))(this);
	}
};
