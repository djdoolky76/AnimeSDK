#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_COLORTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E7730)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int ColorTween_ColorTweenCallback_TypeDefinitionIndex = 6898;

	class ColorTween_ColorTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_COLORTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
