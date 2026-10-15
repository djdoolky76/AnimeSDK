#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_GRADIENTALPHAKEY_CTOR_OFFSET UNITYSDK_OFFSET(0xBA30)

namespace UnityEngine
{
	struct alignas(4) GradientAlphaKey
	{
		::System::Single alpha; // 0x10
		::System::Single time; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTALPHAKEY_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
