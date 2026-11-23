#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/IntParameter.h"

#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x402EE50)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x402EDE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedIntParameter_TypeDefinitionIndex = 20413;

	class ClampedIntParameter : public ::UnityEngine::Rendering::IntParameter
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor(::System::Int32 E937D4885DAA1AE8, ::System::Int32 BDD0BFB63061789A, ::System::Int32 BD80BAA77F7F7D95, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, BDD0BFB63061789A, BD80BAA77F7F7D95, F61D1A6BA6063471);
		}
	};
}
