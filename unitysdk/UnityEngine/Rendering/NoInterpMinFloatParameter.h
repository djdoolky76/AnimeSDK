#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C5D10)
#define UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E4C5CF0)
#define UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E4C5D00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMinFloatParameter_TypeDefinitionIndex = 36564;

	class NoInterpMinFloatParameter
	{
	public:
		::System::Single min; // 0x20
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}

	};
}
