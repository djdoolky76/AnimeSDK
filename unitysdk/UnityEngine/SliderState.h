#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SLIDERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x20715E40)

namespace UnityEngine
{
	inline static constexpr unsigned int SliderState_TypeDefinitionIndex = 5201;

	class SliderState : public ::System::Object
	{
	public:
		::System::Single dragStartPos; // 0x10
		::System::Single dragStartValue; // 0x14
		::System::Boolean isDragging; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERSTATE_CTOR_OFFSET))(this);
		}

	};
}
