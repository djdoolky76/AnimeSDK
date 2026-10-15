#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2978C0)
#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F2978A0)
#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F2978B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMaxFloatParameter_TypeDefinitionIndex = 35638;

	class NoInterpMaxFloatParameter
	{
	public:
		::System::Single max; // 0x20
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}

	};
}
