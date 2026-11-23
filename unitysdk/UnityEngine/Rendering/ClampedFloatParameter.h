#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x233F9B0)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x402EDC0)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x402ED40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedFloatParameter_TypeDefinitionIndex = 20423;

	class ClampedFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void set_value(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single E937D4885DAA1AE8, ::System::Single BDD0BFB63061789A, ::System::Single BD80BAA77F7F7D95, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, BDD0BFB63061789A, BD80BAA77F7F7D95, F61D1A6BA6063471);
		}
	};
}
