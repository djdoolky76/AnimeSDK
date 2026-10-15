#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SLIDER_SLIDEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F54E5D0)

namespace UnityEngine::UI
{
	class Slider_SliderEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SLIDEREVENT_CTOR_OFFSET))(this);
		}

	};
}
