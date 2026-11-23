#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x40399D0)
#define UNITYENGINE_RENDERING_FLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x40399F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatParameter_TypeDefinitionIndex = 20418;

	class FloatParameter
	{
	public:
		::System::Void _ctor(::System::Single E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}

		::System::Void Interp(::System::Single BC546FFFB0A5B7A6, ::System::Single A41067CFE0E0FB08, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, BBCFEC7DB309E927);
		}
	};
}
