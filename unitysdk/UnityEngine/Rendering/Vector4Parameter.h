#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x402EE70)
#define UNITYENGINE_RENDERING_VECTOR4PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x403CFA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector4Parameter_TypeDefinitionIndex = 20373;

	class Vector4Parameter
	{
	public:
		::System::Void Interp(::UnityEngine::E8984F4E44AE20E5 BC546FFFB0A5B7A6, ::UnityEngine::E8984F4E44AE20E5 A41067CFE0E0FB08, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E8984F4E44AE20E5, ::UnityEngine::E8984F4E44AE20E5, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, BBCFEC7DB309E927);
		}

		::System::Void _ctor(::UnityEngine::E8984F4E44AE20E5 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E8984F4E44AE20E5, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
