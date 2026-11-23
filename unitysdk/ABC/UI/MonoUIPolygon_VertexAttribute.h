#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ABC_UI_MONOUIPOLYGON_VERTEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x20535E0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIPolygon_VertexAttribute_TypeDefinitionIndex = 8324;

	struct alignas(4) MonoUIPolygon_VertexAttribute
	{
		::UnityEngine::Vector2 pos; // 0x10
		::UnityEngine::Vector2 uv; // 0x18
		::UnityEngine::E46B881AA2636190 color; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2 A0C1F1E95D5F6CA9, ::UnityEngine::Vector2 FACAB5DBC321CFE1, ::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIPOLYGON_VERTEXATTRIBUTE__CTOR_OFFSET))(this, A0C1F1E95D5F6CA9, FACAB5DBC321CFE1, FD6BEC6563AC7110);
		}
	};
}
