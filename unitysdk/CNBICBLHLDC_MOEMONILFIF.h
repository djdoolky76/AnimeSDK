#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CNBICBLHLDC_MOEMONILFIF__CTOR_OFFSET UNITYSDK_OFFSET(0x5BBAD0)

inline static constexpr unsigned int CNBICBLHLDC_MOEMONILFIF_TypeDefinitionIndex = 88277;

struct alignas(4) CNBICBLHLDC_MOEMONILFIF
{
	::System::Single BIMPNEDLAED; // 0x10
	::UnityEngine::Vector2 GPIOJBLKFAJ; // 0x14

	::System::Void _ctor(::System::Single BEKLCLFIDKF, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CNBICBLHLDC_MOEMONILFIF__CTOR_OFFSET))(this, BEKLCLFIDKF, EGEGIMGMJHN);
	}
};
