#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNKOPDEKLKG.h"
#include "unitysdk/System/ValueType.h"

#define EPIDGNEOKGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x774B00)
#define EPIDGNEOKGM_KLPKAPADKOG_OFFSET UNITYSDK_OFFSET(0x774B60)
#define EPIDGNEOKGM_KPBOACMBLIJ_OFFSET UNITYSDK_OFFSET(0x774BC0)
#define EPIDGNEOKGM__CTOR_OFFSET UNITYSDK_OFFSET(0x774990)

inline static constexpr unsigned int EPIDGNEOKGM_TypeDefinitionIndex = 93136;

struct alignas(4) EPIDGNEOKGM
{
	::System::UInt32 JMKIJIAGMJJ; // 0x10
	::System::Byte _padding0[0x4];
	::FNKOPDEKLKG MLNJGFNLLHD; // 0x18
	::FNKOPDEKLKG MAKKKPJFOGC; // 0x30
	::FNKOPDEKLKG PGAHDBEOOBJ; // 0x48

	::System::Void _ctor(::FNKOPDEKLKG DLHCBGBPHDH, ::FNKOPDEKLKG HCHDNCANONI, ::FNKOPDEKLKG AGLIJMDLFIL)
	{
		return ((::System::Void(*)(::PVOID, ::FNKOPDEKLKG, ::FNKOPDEKLKG, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + EPIDGNEOKGM__CTOR_OFFSET))(this, DLHCBGBPHDH, HCHDNCANONI, AGLIJMDLFIL);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIDGNEOKGM_DISPOSE_OFFSET))(this);
	}

	::System::Boolean KLPKAPADKOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIDGNEOKGM_KLPKAPADKOG_OFFSET))(this);
	}

	::System::Void KPBOACMBLIJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIDGNEOKGM_KPBOACMBLIJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
