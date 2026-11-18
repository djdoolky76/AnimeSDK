#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LMIFLCJILHM_CLAIIABMNCG_OFFSET UNITYSDK_OFFSET(0x440210)
#define LMIFLCJILHM_MKAFECHIJOP_OFFSET UNITYSDK_OFFSET(0x42D920)
#define LMIFLCJILHM_NJFGKDFKCIF_OFFSET UNITYSDK_OFFSET(0x403BB0)
#define LMIFLCJILHM__CTOR_OFFSET UNITYSDK_OFFSET(0x902B10)

inline static constexpr unsigned int LMIFLCJILHM_TypeDefinitionIndex = 95176;

struct alignas(4) LMIFLCJILHM
{
	::System::Double _OJKIPPPBPJD_k__BackingField; // 0x10
	::System::Double _IOOMIIEPHCE_k__BackingField; // 0x18
	::System::Double _FCNKLLGHJHI_k__BackingField; // 0x20

	::System::Void _ctor(::System::Double KAIFOGCKGOP, ::System::Double CCANACDIDMH, ::System::Double FAFDAHBDHKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LMIFLCJILHM__CTOR_OFFSET))(this, KAIFOGCKGOP, CCANACDIDMH, FAFDAHBDHKN);
	}

	::System::Double NJFGKDFKCIF()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFLCJILHM_NJFGKDFKCIF_OFFSET))(this);
	}

	::System::Double MKAFECHIJOP()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFLCJILHM_MKAFECHIJOP_OFFSET))(this);
	}

	::System::Double CLAIIABMNCG()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFLCJILHM_CLAIIABMNCG_OFFSET))(this);
	}
};
