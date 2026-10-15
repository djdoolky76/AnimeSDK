#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C58B0)
#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F2C5890)
#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F2C58A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMaxIntParameter_TypeDefinitionIndex = 35630;

	class NoInterpMaxIntParameter
	{
	public:
		::System::Int32 max; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}

	};
}
