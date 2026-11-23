#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x233F9B0)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x403A740)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x403A6D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MinFloatParameter_TypeDefinitionIndex = 20417;

	class MinFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single min; // 0x20

		::System::Void set_value(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single E937D4885DAA1AE8, ::System::Single BDD0BFB63061789A, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, BDD0BFB63061789A, F61D1A6BA6063471);
		}
	};
}
