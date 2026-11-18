#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define ELOODCKLFGI__CTOR_OFFSET UNITYSDK_OFFSET(0x6551A0)

inline static constexpr unsigned int ELOODCKLFGI_TypeDefinitionIndex = 60112;

struct alignas(8) ELOODCKLFGI
{
	::UnityEngine::Material* KEHECMCDLFC; // 0x10
	::System::Int32 FJPBKADAMGC; // 0x18
	::UnityEngine::Color GPIOJBLKFAJ; // 0x1C

	::System::Void _ctor(::UnityEngine::Material* HODAIDNDKHD, ::System::Int32 DABJIHHDFNO, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ELOODCKLFGI__CTOR_OFFSET))(this, HODAIDNDKHD, DABJIHHDFNO, EGEGIMGMJHN);
	}
};
