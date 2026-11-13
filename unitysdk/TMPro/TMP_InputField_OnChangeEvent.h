#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_ONCHANGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x19BA8650)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_OnChangeEvent_TypeDefinitionIndex = 45675;

	class TMP_InputField_OnChangeEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONCHANGEEVENT_CTOR_OFFSET))(this);
		}

	};
}
