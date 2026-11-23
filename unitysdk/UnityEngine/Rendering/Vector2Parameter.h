#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x403CEF0)
#define UNITYENGINE_RENDERING_VECTOR2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x403CF40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector2Parameter_TypeDefinitionIndex = 20342;

	class Vector2Parameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}

		::System::Void Interp(::UnityEngine::Vector2 BC546FFFB0A5B7A6, ::UnityEngine::Vector2 A41067CFE0E0FB08, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, BBCFEC7DB309E927);
		}
	};
}
