#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SCROLLBAR_SCROLLEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x43D3130)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar_ScrollEvent_TypeDefinitionIndex = 18657;

	class Scrollbar_ScrollEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SCROLLEVENT__CTOR_OFFSET))(this);
		}
	};
}
