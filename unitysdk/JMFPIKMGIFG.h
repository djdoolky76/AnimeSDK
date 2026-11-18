#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define JMFPIKMGIFG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1309AE70)
#define JMFPIKMGIFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1309B160)

inline static constexpr unsigned int JMFPIKMGIFG_TypeDefinitionIndex = 74371;

class JMFPIKMGIFG : public ::CGJEMKCKIJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPIKMGIFG__CTOR_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JMFPIKMGIFG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}
};
