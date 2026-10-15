#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E78B0)

namespace UnityEngine::UI::CoroutineTween
{
	class FloatTween_FloatTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
