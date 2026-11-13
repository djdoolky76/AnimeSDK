#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SCROLLRECT_REBOUNDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x18590500)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_ReboundEvent_TypeDefinitionIndex = 6842;

	class ScrollRect_ReboundEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_REBOUNDEVENT_CTOR_OFFSET))(this);
		}

	};
}
