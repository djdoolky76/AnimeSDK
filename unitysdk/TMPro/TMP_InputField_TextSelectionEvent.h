#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F303210)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TextSelectionEvent_TypeDefinitionIndex = 44602;

	class TMP_InputField_TextSelectionEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT_CTOR_OFFSET))(this);
		}

	};
}
