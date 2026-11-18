#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_SELECTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB15C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_SelectionEvent_TypeDefinitionIndex = 37825;

	class TMP_InputField_SelectionEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_SELECTIONEVENT__CTOR_OFFSET))(this);
		}
	};
}
