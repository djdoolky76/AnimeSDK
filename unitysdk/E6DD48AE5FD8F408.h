#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define E6DD48AE5FD8F408__CTOR_OFFSET UNITYSDK_OFFSET(0x40BB650)

inline static constexpr unsigned int E6DD48AE5FD8F408_TypeDefinitionIndex = 18287;

struct alignas(4) E6DD48AE5FD8F408
{
	::System::UInt32 B5120A694E2AD5DA; // 0x10
	::System::UInt32 E09FA8DD4C7016C9; // 0x14
	::System::UInt32 A5C299C395D3E1B2; // 0x18

	::System::Void _ctor(::TMPro::TMP_GlyphPairAdjustmentRecord* B4E4937C5E1E0450)
	{
		return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + E6DD48AE5FD8F408__CTOR_OFFSET))(this, B4E4937C5E1E0450);
	}
};
