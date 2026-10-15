#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_FLOATPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F27CC00)
#define UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1F293EC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatParameter_TypeDefinitionIndex = 35633;

	class FloatParameter
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
}
