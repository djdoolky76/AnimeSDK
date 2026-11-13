#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x3F23200)
#define UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3F23110)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DisposeUtility_TypeDefinitionIndex = 36492;

	struct alignas(4) DisposeUtility
	{
		::System::Boolean _Disposed; // 0x10
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_1_OFFSET))(this, a1);
		}

	};
}
