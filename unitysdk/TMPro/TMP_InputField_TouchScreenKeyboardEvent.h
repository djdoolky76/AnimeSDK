#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F303230)

namespace TMPro
{
	class TMP_InputField_TouchScreenKeyboardEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT_CTOR_OFFSET))(this);
		}

	};
}
