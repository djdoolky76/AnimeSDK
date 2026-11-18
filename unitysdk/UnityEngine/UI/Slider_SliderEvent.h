#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB2F20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_SliderEvent_TypeDefinitionIndex = 18453;

	class Slider_SliderEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET))(this);
		}
	};
}
