#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85AF60)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_TextSelectionEvent_TypeDefinitionIndex = 37826;

	class TMP_InputField_TextSelectionEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_TEXTSELECTIONEVENT__CTOR_OFFSET))(this);
		}
	};
}
