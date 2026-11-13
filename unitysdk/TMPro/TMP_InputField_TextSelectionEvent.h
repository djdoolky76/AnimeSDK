#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x19BA8640)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TextSelectionEvent_TypeDefinitionIndex = 45677;

	class TMP_InputField_TextSelectionEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT_CTOR_OFFSET))(this);
		}

	};
}
