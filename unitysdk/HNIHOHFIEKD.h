#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsFilter; }

#define HNIHOHFIEKD__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int HNIHOHFIEKD_TypeDefinitionIndex = 70117;

struct alignas(8) HNIHOHFIEKD
{
	::Nap::NapECS::EcsFilter* ADPHACKJAOE; // 0x10
	::System::Boolean EBMHHKIMGCD; // 0x18

	::System::Void _ctor(::Nap::NapECS::EcsFilter* PNPMMLNCDNK, ::System::Boolean MIIKPGNACCL)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNIHOHFIEKD__CTOR_OFFSET))(this, PNPMMLNCDNK, MIIKPGNACCL);
	}
};
