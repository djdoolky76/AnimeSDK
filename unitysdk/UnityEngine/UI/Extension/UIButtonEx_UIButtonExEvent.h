#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEXEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C7060)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_UIButtonExEvent_TypeDefinitionIndex = 48608;

	class UIButtonEx_UIButtonExEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEXEVENT__CTOR_OFFSET))(this);
		}
	};
}
