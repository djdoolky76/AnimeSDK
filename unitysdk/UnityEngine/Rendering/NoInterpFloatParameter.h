#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPFLOATPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C52C0)

namespace UnityEngine::Rendering
{
	class NoInterpFloatParameter
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
