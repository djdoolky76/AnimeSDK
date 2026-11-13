#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_INPUTFIELD_ONCHANGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x18557790)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_OnChangeEvent_TypeDefinitionIndex = 6757;

	class InputField_OnChangeEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONCHANGEEVENT_CTOR_OFFSET))(this);
		}

	};
}
