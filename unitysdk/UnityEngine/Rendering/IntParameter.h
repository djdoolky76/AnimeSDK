#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x403A5E0)
#define UNITYENGINE_RENDERING_INTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x403A610)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IntParameter_TypeDefinitionIndex = 20366;

	class IntParameter
	{
	public:
		::System::Void _ctor(::System::Int32 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}

		::System::Void Interp(::System::Int32 BC546FFFB0A5B7A6, ::System::Int32 A41067CFE0E0FB08, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, BBCFEC7DB309E927);
		}
	};
}
