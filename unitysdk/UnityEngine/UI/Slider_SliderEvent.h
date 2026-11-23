#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x43D7F20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_SliderEvent_TypeDefinitionIndex = 18665;

	class Slider_SliderEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET))(this);
		}
	};
}
