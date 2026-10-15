#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_INTPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2AAD30)
#define UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1F2C42E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IntParameter_TypeDefinitionIndex = 35625;

	class IntParameter
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
}
