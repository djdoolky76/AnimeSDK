#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define GBIJEANJJOM__CTOR_OFFSET UNITYSDK_OFFSET(0x772C00)

inline static constexpr unsigned int GBIJEANJJOM_TypeDefinitionIndex = 56910;

struct alignas(8) GBIJEANJJOM
{
	::UnityEngine::Material* KEHECMCDLFC; // 0x10
	::System::Int32 FJPBKADAMGC; // 0x18
	::System::Single GPIOJBLKFAJ; // 0x1C

	::System::Void _ctor(::UnityEngine::Material* HODAIDNDKHD, ::System::Int32 DABJIHHDFNO, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GBIJEANJJOM__CTOR_OFFSET))(this, HODAIDNDKHD, DABJIHHDFNO, EGEGIMGMJHN);
	}
};
