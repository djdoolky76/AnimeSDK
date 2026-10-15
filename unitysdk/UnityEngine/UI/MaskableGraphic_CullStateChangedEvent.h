#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULLSTATECHANGEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F52B390)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_CullStateChangedEvent_TypeDefinitionIndex = 6795;

	class MaskableGraphic_CullStateChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_CULLSTATECHANGEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
