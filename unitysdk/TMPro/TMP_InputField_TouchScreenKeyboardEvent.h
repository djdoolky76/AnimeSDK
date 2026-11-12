#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x205B3FC0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TouchScreenKeyboardEvent_TypeDefinitionIndex = 45678;

	class TMP_InputField_TouchScreenKeyboardEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT_CTOR_OFFSET))(this);
		}

	};
}
