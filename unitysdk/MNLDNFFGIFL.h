#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/System/ValueType.h"

class ABFDJPPBLHF;

#define MNLDNFFGIFL_BDMCEOMJKOA_OFFSET UNITYSDK_OFFSET(0x8CE180)
#define MNLDNFFGIFL__CTOR_OFFSET UNITYSDK_OFFSET(0x8CE120)

inline static constexpr unsigned int MNLDNFFGIFL_TypeDefinitionIndex = 93871;

struct alignas(4) MNLDNFFGIFL
{
	::System::Int32 NJCMPIIGHCJ; // 0x10
	::KBKLCGKKIPI OHOGDOMNHNK; // 0x14
	::KBKLCGKKIPI BFBELMDIAHI; // 0x20
	::System::Byte _padding0[0x4];
	::System::UInt64 PFPOKPHKJNB; // 0x30
	::System::Single HMFINJODBKO; // 0x38

	::System::Void _ctor(::ABFDJPPBLHF* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::ABFDJPPBLHF*))((::PBYTE)hIl2Cpp + MNLDNFFGIFL__CTOR_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void BDMCEOMJKOA(::ABFDJPPBLHF* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::ABFDJPPBLHF*))((::PBYTE)hIl2Cpp + MNLDNFFGIFL_BDMCEOMJKOA_OFFSET))(this, GKBJOPJKCLB);
	}
};
