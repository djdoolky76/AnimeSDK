#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B8A90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureEvent_TypeDefinitionIndex = 27507;

	class PointerCaptureEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT__CTOR_OFFSET))(this);
		}
	};
}
