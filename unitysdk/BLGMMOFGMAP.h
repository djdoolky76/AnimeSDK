#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BLGMMOFGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int BLGMMOFGMAP_TypeDefinitionIndex = 58272;

struct alignas(8) BLGMMOFGMAP
{
	::System::UInt64 ADLKHGJKMIB; // 0x10
	::System::String* LJMFBKBHHFG; // 0x18

	::System::Void _ctor(::System::UInt64 PDDFCKMAAAM, ::System::String* IMOLCPPFMOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + BLGMMOFGMAP__CTOR_OFFSET))(this, PDDFCKMAAAM, IMOLCPPFMOI);
	}
};
