#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MCEECPBAAHB_OBCDHPOBFOK__CTOR_OFFSET UNITYSDK_OFFSET(0x409320)

inline static constexpr unsigned int MCEECPBAAHB_OBCDHPOBFOK_TypeDefinitionIndex = 58028;

struct alignas(4) MCEECPBAAHB_OBCDHPOBFOK
{
	::System::Single BIMPNEDLAED; // 0x10
	::System::Single GPIOJBLKFAJ; // 0x14

	::System::Void _ctor(::System::Single BEKLCLFIDKF, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MCEECPBAAHB_OBCDHPOBFOK__CTOR_OFFSET))(this, BEKLCLFIDKF, EGEGIMGMJHN);
	}
};
