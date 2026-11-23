#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFE47AD60EB94A25/FB886088C605BA42.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Splines { class Spline; }

#define B3199FC5067EFA7B__CTOR_OFFSET UNITYSDK_OFFSET(0x404A730)

inline static constexpr unsigned int B3199FC5067EFA7B_TypeDefinitionIndex = 20663;

struct alignas(8) B3199FC5067EFA7B
{
	::UnityEngine::Splines::Spline* ED5CE2E00999B89B; // 0x10
	::BFE47AD60EB94A25::FB886088C605BA42 EE7B09F316DFD180; // 0x18
	::System::Int32 FBF5340853146B7A; // 0x1C
	::System::Single A1540719E6FEF31C; // 0x20
	::System::Single A545676E47F666B5; // 0x24

	::System::Void _ctor(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::BFE47AD60EB94A25::FB886088C605BA42 E670AC82C72F2394, ::System::Int32 E9DB269718295F36, ::System::Single A381B4292D440741, ::System::Single FE841037C1767D69)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::Spline*, ::BFE47AD60EB94A25::FB886088C605BA42, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + B3199FC5067EFA7B__CTOR_OFFSET))(this, F03E0BDCBABB08A2, E670AC82C72F2394, E9DB269718295F36, A381B4292D440741, FE841037C1767D69);
	}
};
