#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define LCGFBJLEBMP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD41E690)
#define LCGFBJLEBMP__CTOR_OFFSET UNITYSDK_OFFSET(0xD41E880)

inline static constexpr unsigned int LCGFBJLEBMP_TypeDefinitionIndex = 72755;

class LCGFBJLEBMP : public ::CGJEMKCKIJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFBJLEBMP__CTOR_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LCGFBJLEBMP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}
};
