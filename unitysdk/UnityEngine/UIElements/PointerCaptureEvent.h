#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48FBA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureEvent_TypeDefinitionIndex = 5912;

	class PointerCaptureEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT_CTOR_OFFSET))(this);
		}

	};
}
