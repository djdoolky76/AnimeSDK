#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x40676F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TouchScreenKeyboardEvent_TypeDefinitionIndex = 18174;

	class TMP_InputField_TouchScreenKeyboardEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TOUCHSCREENKEYBOARDEVENT__CTOR_OFFSET))(this);
		}
	};
}
