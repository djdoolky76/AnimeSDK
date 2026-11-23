#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define TMPRO_VERTEXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x40CFA00)

namespace TMPro
{
	inline static constexpr unsigned int VertexGradient_TypeDefinitionIndex = 18243;

	struct alignas(4) VertexGradient
	{
		::UnityEngine::E46B881AA2636190 topLeft; // 0x10
		::UnityEngine::E46B881AA2636190 topRight; // 0x20
		::UnityEngine::E46B881AA2636190 bottomLeft; // 0x30
		::UnityEngine::E46B881AA2636190 bottomRight; // 0x40

		::System::Void _ctor(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + TMPRO_VERTEXGRADIENT__CTOR_OFFSET))(this, FD6BEC6563AC7110);
		}
	};
}
