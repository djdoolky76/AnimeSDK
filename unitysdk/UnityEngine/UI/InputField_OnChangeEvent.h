#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B3350)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_OnChangeEvent_TypeDefinitionIndex = 18384;

	class InputField_OnChangeEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
