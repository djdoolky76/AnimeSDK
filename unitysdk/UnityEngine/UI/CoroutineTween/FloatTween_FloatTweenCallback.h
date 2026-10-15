#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B9A70)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int FloatTween_FloatTweenCallback_TypeDefinitionIndex = 6900;

	class FloatTween_FloatTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
