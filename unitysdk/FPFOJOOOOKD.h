#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FPFOJOOOOKD__CTOR_OFFSET UNITYSDK_OFFSET(0x409320)

inline static constexpr unsigned int FPFOJOOOOKD_TypeDefinitionIndex = 79857;

struct alignas(4) FPFOJOOOOKD
{
	::System::Single MMNNLOMMNGL; // 0x10
	::System::Single LLBEKEFONPC; // 0x14

	::System::Void _ctor(::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FPFOJOOOOKD__CTOR_OFFSET))(this, FNIOPKPHDEH, PMNLNNGEIFM);
	}
};
