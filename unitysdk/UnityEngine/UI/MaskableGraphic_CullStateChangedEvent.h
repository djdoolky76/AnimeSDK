#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULLSTATECHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F200)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_CullStateChangedEvent_TypeDefinitionIndex = 18423;

	class MaskableGraphic_CullStateChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_CULLSTATECHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
