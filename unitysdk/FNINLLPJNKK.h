#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FNINLLPJNKK__CTOR_OFFSET UNITYSDK_OFFSET(0x409320)

inline static constexpr unsigned int FNINLLPJNKK_TypeDefinitionIndex = 44188;

struct alignas(4) FNINLLPJNKK
{
	::System::Single MMNNLOMMNGL; // 0x10
	::System::Single GPIOJBLKFAJ; // 0x14

	::System::Void _ctor(::System::Single FNIOPKPHDEH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNINLLPJNKK__CTOR_OFFSET))(this, FNIOPKPHDEH, EGEGIMGMJHN);
	}
};
