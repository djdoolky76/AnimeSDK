#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AIKLAJEFFMN_NHIDDNFLALA_OFFSET UNITYSDK_OFFSET(0x728090)
#define AIKLAJEFFMN_NKGPCBNHAOB_OFFSET UNITYSDK_OFFSET(0x728040)
#define AIKLAJEFFMN_OKAJGFGDNME_OFFSET UNITYSDK_OFFSET(0x7280A0)
#define AIKLAJEFFMN_PPFCFCJNCPG_OFFSET UNITYSDK_OFFSET(0x359320)
#define AIKLAJEFFMN__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int AIKLAJEFFMN_TypeDefinitionIndex = 77470;

struct alignas(4) AIKLAJEFFMN
{
	::System::Int32 DIIHAOHEGBP; // 0x10

	::System::Void _ctor(::System::Int32 JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIKLAJEFFMN__CTOR_OFFSET))(this, JBJFINAFFKO);
	}

	::System::Boolean NKGPCBNHAOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKLAJEFFMN_NKGPCBNHAOB_OFFSET))(this);
	}

	::System::Int32 PPFCFCJNCPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKLAJEFFMN_PPFCFCJNCPG_OFFSET))(this);
	}

	::System::Void NHIDDNFLALA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKLAJEFFMN_NHIDDNFLALA_OFFSET))(this);
	}

	::System::Void OKAJGFGDNME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKLAJEFFMN_OKAJGFGDNME_OFFSET))(this);
	}
};
