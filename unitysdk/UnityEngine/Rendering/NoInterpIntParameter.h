#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPINTPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C55C0)

namespace UnityEngine::Rendering
{
	class NoInterpIntParameter
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPINTPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
