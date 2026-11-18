#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBAAJJPBMNM.h"
#include "unitysdk/System/ValueType.h"

#define IFMDJFPDEIC__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int IFMDJFPDEIC_TypeDefinitionIndex = 60722;

struct alignas(4) IFMDJFPDEIC
{
	::MBAAJJPBMNM MIDGBLDKHMI; // 0x10
	::System::Int32 FKGNDKNHAEH; // 0x14
	::System::Int32 NOLLMOIGJHF; // 0x18

	::System::Void _ctor(::MBAAJJPBMNM MIDGBLDKHMI, ::System::Int32 FKGNDKNHAEH, ::System::Int32 NOLLMOIGJHF)
	{
		return ((::System::Void(*)(::PVOID, ::MBAAJJPBMNM, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFMDJFPDEIC__CTOR_OFFSET))(this, MIDGBLDKHMI, FKGNDKNHAEH, NOLLMOIGJHF);
	}
};
