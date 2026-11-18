#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2005C020)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_OnChangeEvent_TypeDefinitionIndex = 37824;

	class TMP_InputField_OnChangeEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
