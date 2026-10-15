#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_INPUTFIELD_SUBMITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3031F0)

namespace TMPro
{
	class TMP_InputField_SubmitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_SUBMITEVENT_CTOR_OFFSET))(this);
		}

	};
}
