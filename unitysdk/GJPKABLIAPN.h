#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define GJPKABLIAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x6C3860)

inline static constexpr unsigned int GJPKABLIAPN_TypeDefinitionIndex = 78761;

struct alignas(8) GJPKABLIAPN
{
	::UnityEngine::RectTransform* KEHECMCDLFC; // 0x10
	::UnityEngine::Vector2 OHJOKINLKEB; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* HODAIDNDKHD, ::UnityEngine::Vector2 OPIKLNMPMEH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GJPKABLIAPN__CTOR_OFFSET))(this, HODAIDNDKHD, OPIKLNMPMEH);
	}
};
