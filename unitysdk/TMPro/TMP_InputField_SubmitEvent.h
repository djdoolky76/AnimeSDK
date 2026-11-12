#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_SUBMITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x205B3F80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_SubmitEvent_TypeDefinitionIndex = 45674;

	class TMP_InputField_SubmitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_SUBMITEVENT_CTOR_OFFSET))(this);
		}

	};
}
