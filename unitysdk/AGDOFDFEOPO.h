#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define AGDOFDFEOPO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x142109E0)
#define AGDOFDFEOPO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14210950)
#define AGDOFDFEOPO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14210C00)
#define AGDOFDFEOPO__CTOR_OFFSET UNITYSDK_OFFSET(0x14210B60)

inline static constexpr unsigned int AGDOFDFEOPO_TypeDefinitionIndex = 65065;

class AGDOFDFEOPO : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* DFMMFAOBCAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDOFDFEOPO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDOFDFEOPO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AGDOFDFEOPO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDOFDFEOPO_GDEOPIBNOIN_OFFSET))(this);
	}
};
