#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PGCOGLDHMNF_DFGKJOONHAD_OFFSET UNITYSDK_OFFSET(0x7E07D0)
#define PGCOGLDHMNF_LGBFKOJAJHB_OFFSET UNITYSDK_OFFSET(0x7E0830)
#define PGCOGLDHMNF_MLHMECJAHNK_OFFSET UNITYSDK_OFFSET(0x7E0880)

inline static constexpr unsigned int PGCOGLDHMNF_TypeDefinitionIndex = 83564;

struct alignas(4) PGCOGLDHMNF
{
	::System::Boolean OKPIPLOABAG; // 0x10

	::System::Void DFGKJOONHAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCOGLDHMNF_DFGKJOONHAD_OFFSET))(this);
	}

	::System::Void LGBFKOJAJHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCOGLDHMNF_LGBFKOJAJHB_OFFSET))(this);
	}

	::System::Void MLHMECJAHNK(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGCOGLDHMNF_MLHMECJAHNK_OFFSET))(this, FBILHHBPEHD);
	}
};
