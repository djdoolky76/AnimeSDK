#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLMGOICPDIH.h"

#define EOLDCFLNKHC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1355B7F0)
#define EOLDCFLNKHC_EFDBOOFDIJM_OFFSET UNITYSDK_OFFSET(0x1355B810)
#define EOLDCFLNKHC_JDFJPGNHIPA_OFFSET UNITYSDK_OFFSET(0x1355B800)
#define EOLDCFLNKHC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1355B760)
#define EOLDCFLNKHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1355B7B0)

inline static constexpr unsigned int EOLDCFLNKHC_TypeDefinitionIndex = 78367;

class EOLDCFLNKHC
{
public:
	::DLMGOICPDIH _POGNCIDGMEM_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLDCFLNKHC__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLDCFLNKHC_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLDCFLNKHC_ANEOCOIFDDJ_OFFSET))(this);
	}

	::DLMGOICPDIH JDFJPGNHIPA()
	{
		return ((::DLMGOICPDIH(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLDCFLNKHC_JDFJPGNHIPA_OFFSET))(this);
	}

	::System::Void EFDBOOFDIJM(::DLMGOICPDIH EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DLMGOICPDIH))((::PBYTE)hIl2Cpp + EOLDCFLNKHC_EFDBOOFDIJM_OFFSET))(this, EGEGIMGMJHN);
	}
};
