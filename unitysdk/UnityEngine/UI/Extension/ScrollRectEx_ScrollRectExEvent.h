#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_SCROLLRECTEXEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D64A240)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ScrollRectEx_ScrollRectExEvent_TypeDefinitionIndex = 51974;

	class ScrollRectEx_ScrollRectExEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_SCROLLRECTEXEVENT__CTOR_OFFSET))(this);
		}
	};
}
