#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"

#define DCBPJHAHAJC__CTOR_OFFSET UNITYSDK_OFFSET(0x7E9630)

inline static constexpr unsigned int DCBPJHAHAJC_TypeDefinitionIndex = 40636;

struct alignas(4) DCBPJHAHAJC
{
	::Foundation::Unreal::FTransform3D OBBIEJKNHKM; // 0x10
	::HHDPDELCDNI KJGKCBCJLKN; // 0x38

	::System::Void _ctor(::HHDPDELCDNI JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + DCBPJHAHAJC__CTOR_OFFSET))(this, JNLBPMKIFNK);
	}
};
